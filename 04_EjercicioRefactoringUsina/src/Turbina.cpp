/*
 * Turbina.cpp
 *
 *  Created on: 23 may 2024
 *      Author: gabriel
 */

#include "Turbina.h"

Turbina::Turbina() {
	// TODO Auto-generated constructor stub

}

Turbina::~Turbina() {
	// TODO Auto-generated destructor stub
}

Turbina::Turbina(bool activa, double potencia) {
	this->activa = activa;
	this->potencia = potencia;
}

double Turbina::calcularPotencia() {
	return 0;
}

double Turbina::getPotencia() {
	return this->potencia;
}
