/*
 * Transaccion.cpp
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#include "Transaccion.h"

#include <string>
#include <iostream>
using namespace std;

Transaccion::Transaccion() {
	// TODO Auto-generated constructor stub

}

Transaccion::Transaccion(int id, string fecha, double importe) {
	this->id = id;
	this->fecha = fecha;
	this->importe = importe;

}

void Transaccion::mostrar() {
	cout << "id: " << this->id << ", fecha: " << this->fecha + " " << this->importe << endl;
}
Transaccion::~Transaccion() {
	// TODO Auto-generated destructor stub
}

