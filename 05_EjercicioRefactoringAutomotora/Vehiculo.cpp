/*
 * Vehiculo.cpp
 *
 *  Created on: 28 may 2024
 *      Author: gabriel
 */

#include "Vehiculo.h"
#include "Cliente.h"

Vehiculo::Vehiculo() {
	// TODO Auto-generated constructor stub

}
Vehiculo::Vehiculo(int nro, string mat, Cliente* duenioActual) {
	this->nro = nro;
	this->matricula = mat;
	this->duenioActual = duenioActual;
}

Vehiculo::~Vehiculo() {
	// TODO Auto-generated destructor stub
}

