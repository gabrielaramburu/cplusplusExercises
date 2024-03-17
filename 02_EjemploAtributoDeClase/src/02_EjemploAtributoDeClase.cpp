//============================================================================
// Name        : 02_EjemploAtributoDeClase.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Automovil.h"
using namespace std;

int main() {
	Automovil a1(1,"Ford");
	Automovil a2(2,"Renault");
	Automovil a3(3,"Ford");

	//Ejemplo 1, atributo publico
	cout << "Cantidad de autos creados " << Automovil::contador <<endl;

	//Ejemplo 2, atributo privado
	cout << "Cantidad de autos Ford creados " << Automovil::obtenerContadorPrivado() <<endl;
	return 0;
}
