/*
 * Automovil.cpp
 *
 *  Created on: 9 may 2024
 *      Author: gabriel
 */

#include "Automovil.h"
#include <iostream>

using namespace std;

Automovil::Automovil() {
	// TODO Auto-generated constructor stub

}

Automovil::~Automovil() {
	// TODO Auto-generated destructor stub
}

int Automovil::calcularDuracion() {
	cout << "Tiempo de transportar en automovil, bajo" << endl;
	return 10;
}
int Automovil::calcularCosto() {
	cout << "Costo de transportar en automovil, mediano" << endl;
	return 50;
}

string Automovil::descTransporte() {
	return "Automovil";
}
