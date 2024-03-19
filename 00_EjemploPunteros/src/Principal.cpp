//============================================================================
// Name        : 00_EjemploPunteros.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Mascota.h"

using namespace std;

void ejemploPuntero();
void ejemploPuntero_b();
void ejemploPuntero_c();
void ejemploPuntero_d();

int main() {
//	ejemploPuntero();
//	ejemploPuntero_b();
//	ejemploPuntero_c();

	ejemploPuntero_d();
	return 0;
}

void ejemploPuntero() {
	int i = 10;
	cout << "Contenido de i: " << i;
	cout << endl;
	cout << "Dirección de memoria de i: " << &i;

	int *i2 = NULL;
	i2 = &i;

	cout << endl;
	cout << "Contenido del puntero: " << i2;
	cout << endl;
	cout << "Dirección de momoria del puntero: " << &i2;
	cout << endl;
	cout << "Valor contenido en la celda de memoria a la que apunta el puntero:"
			<< *i2;
	cout << endl;

	*i2 = 20; //cambio el contenido de la celda de momoria a al que apunta el puntero

	cout << "Contenido de i " << i;

}

void ejemploPuntero_b() {
	//https://cplusplus.com/doc/tutorial/pointers/
	int firstvalue, secondvalue;
	int *mypointer;

	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';
}

void ejemploPuntero_c() {
	//https://cplusplus.com/doc/tutorial/pointers/
	int firstvalue = 5, secondvalue = 15;
	int *p1, *p2;

	p1 = &firstvalue;  // p1 = address of firstvalue
	p2 = &secondvalue; // p2 = address of secondvalue
	*p1 = 10;          // value pointed to by p1 = 10
	*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
	p1 = p2;           // p1 = p2 (value of pointer is copied)
	*p1 = 20;          // value pointed to by p1 = 20

	cout << endl;
	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';
}

void ejemploPuntero_d() {
	//ejemplo de Referencias
	Mascota m("Teo");

	Mascota *aux1 = &m;

	cout << endl;
	cout << "Nombre mascota " << m.nombre;
	cout << endl;
	cout << "Nombre mascota " << aux1->nombre;

	aux1->nombre = "TEO";
	cout << endl;
	cout << "Nombre mascota " << m.nombre;
	cout << endl;
	cout << "Nombre mascota " << aux1->nombre;

	cout << "Dirección de momoria del objeto estático " << &m;


	cout << endl << "********* " << endl;


	cout << endl;

	Mascota *m2 = new Mascota("Sultan");
	cout << endl;
	cout << "Dirección de momoria del objeto dinámico " << &m2;

	//Observese como la asignación cambia,
	//*aux3 = &m2 no funciona
	Mascota *aux3 = m2;
	Mascota *aux4 = m2;

	aux3->nombre = "Zultan";
	aux4->nombre = "ZULTAN";

	cout << "Nombre mascota " << m2->nombre;



}
