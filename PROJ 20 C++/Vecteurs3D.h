#pragma once
#include <iostream>
#include <string.h>

class Vecteurs3D
{

private:

	double *vect;


public:

	Vecteurs3D(double x1=0 ,double y1=0 ,double z1=0 );
	Vecteurs3D(const Vecteurs3D &V);
    ~Vecteurs3D();

	Vecteurs3D& somme(const Vecteurs3D& V)const;
	double prodscal(const Vecteurs3D& V)const;

	void affich()const;
	bool operator == (const Vecteurs3D& V);
	bool operator != (const Vecteurs3D& V);
	Vecteurs3D& operator = (const Vecteurs3D& V);

	const double& operator [] (int t);
	
	Vecteurs3D& operator +(const Vecteurs3D& V)const;
	double operator * (const Vecteurs3D& V)const;


};
