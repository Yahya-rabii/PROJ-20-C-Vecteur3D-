#include "Vecteurs3D.h"
#include <iostream>
#include<assert.h>

using namespace std;

Vecteurs3D::Vecteurs3D(double x, double y , double z)
{
	this->vect = new double[3];


	this->vect[0] = x;
	this->vect[1] = y;
	this->vect[2] = z;

}

Vecteurs3D::Vecteurs3D(const Vecteurs3D& V)
{
	this->vect = new double[3];


	this->vect[0] = V.vect[0];
	this->vect[1] = V.vect[1];
	this->vect[2] = V.vect[2];
}

Vecteurs3D::~Vecteurs3D()
{
	delete[] this->vect;
	this->vect = nullptr;
	cout << "the obj was deleted" << endl;


}

Vecteurs3D& Vecteurs3D::somme(const Vecteurs3D& V) const
{
	Vecteurs3D* SM = new Vecteurs3D();

	SM->vect[0] = this->vect[0] + V.vect[0];
	SM->vect[1] = this->vect[1] + V.vect[1];
	SM->vect[2] = this->vect[2] + V.vect[2];


	return *SM;
}

double Vecteurs3D::prodscal(const Vecteurs3D& V) const
{
	double pro;

	pro = this->vect[0] * V.vect[0];
	pro = pro + this->vect[1] * V.vect[1];
	pro = pro + this->vect[2] * V.vect[2];


	return pro;
}

void Vecteurs3D::affich() const
{

	cout << "(" << this->vect[0] << " , " << this->vect[1] << " , " << this->vect[2] << " ) " << endl;

}

bool Vecteurs3D::operator==(const Vecteurs3D& V)
{
	
	bool etat=true;

	for (int i = 0; i < 3; i++)
	{

	 etat = etat && (this->vect[i] == V.vect[i]);

	}

	return etat;
}

bool Vecteurs3D::operator!=(const Vecteurs3D& V)
{
	
	return !(this->operator==(V));

}

Vecteurs3D& Vecteurs3D::operator=(const Vecteurs3D& V)
{
	if (this != &V)
	{
		delete[] this->vect ;
		this->vect = 0;
		this->vect = new double[3];
		
		for (int i = 0; i < 3; i++)
		{
			this->vect[i] = V.vect[i];
		}

	}
	return *this;
}

const /* [const return value] */ double& Vecteurs3D::operator[](int i)
{
	
	assert((i >= 0 && i < 3));
	return this->vect[i];

}

Vecteurs3D& Vecteurs3D::operator+ (const Vecteurs3D& V) const
{
	Vecteurs3D *SM= new Vecteurs3D() ;

	SM->vect[0] = this->vect[0] + V.vect[0];
	SM->vect[1] = this->vect[1] + V.vect[1];
	SM->vect[2] = this->vect[2] + V.vect[2];


	return *SM;
}

double Vecteurs3D::operator*(const Vecteurs3D& V) const
{
	double pro;

	pro = this->vect[0] * V.vect[0];
	pro = pro + this->vect[1] * V.vect[1];
	pro = pro + this->vect[2] * V.vect[2];

	return pro;
}