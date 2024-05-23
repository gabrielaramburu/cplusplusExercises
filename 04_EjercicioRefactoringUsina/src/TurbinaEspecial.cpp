/*
 * TurbinaEspecial.cpp
 *
 *  Created on: 23 may 2024
 *      Author: gabriel
 */

#include "TurbinaEspecial.h"

TurbinaEspecial::TurbinaEspecial() {
	// TODO Auto-generated constructor stub

}

TurbinaEspecial::~TurbinaEspecial() {
	// TODO Auto-generated destructor stub
}

TurbinaEspecial::TurbinaEspecial(bool activa, double potencia, int coef){
	this->activa = activa;
	this->potencia = potencia;
	this->coeficiente = coef;
}

double TurbinaEspecial::calcularPotencia() {
	return 0;
}

int TurbinaEspecial::getCoeficiente() {
	return this->coeficiente;
}
