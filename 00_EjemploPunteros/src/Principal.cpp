//============================================================================
// Name        : 00_EjemploPunteros.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void ejemploPuntero();
void ejemploPuntero_b();
void ejemploPuntero_c();

int main() {
	ejemploPuntero();
	ejemploPuntero_b();
	ejemploPuntero_c();
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
