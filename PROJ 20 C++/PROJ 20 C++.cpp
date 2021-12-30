#include <iostream>
#include "Vecteurs3D.h"

using namespace std;


int main()
{

	Vecteurs3D v1;
	Vecteurs3D v2(1, 2, 3);
	Vecteurs3D v3(v2);
	Vecteurs3D v4;
	double z=0;


	cout << v2.operator[](1) << endl;


	v4.operator=(v2);
	v2.affich();
	v4.affich();


	v1 = v2 + v3;

	v1.affich();

	z = v1 * v2;

	cout << "prod = " << z <<endl;
}