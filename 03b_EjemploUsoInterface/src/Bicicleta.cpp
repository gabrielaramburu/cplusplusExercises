/*
 * Bicicleta.cpp
 *
 *  Created on: 9 may 2024
 *      Author: gabriel
 */

#include "Bicicleta.h"
#include <iostream>;

using namespace std;

Bicicleta::Bicicleta() {
	// TODO Auto-generated constructor stub

}

Bicicleta::~Bicicleta() {
	// TODO Auto-generated destructor stub
}

int Bicicleta::calcularCosto() {
	cout << "Costo de transportar en bicicleta, bajo" << endl;
	return 10;
}

int Bicicleta::calcularDuracion() {
	cout << "Tiempo de transportar en bicicleta, alto" << endl;
	return 100;
}

string Bicicleta::descTransporte() {
	return "Bicicleta";
}
