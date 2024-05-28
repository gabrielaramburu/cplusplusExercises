/*
 * Vehiculo.cpp
 *
 *  Created on: 28 may 2024
 *      Author: gabriel
 */

#include "Vehiculo.h"


Vehiculo::Vehiculo() {
	// TODO Auto-generated constructor stub

}
Vehiculo::Vehiculo(int nro, string mat) {
	this->nro = nro;
	this->matricula = mat;
}

Vehiculo::~Vehiculo() {
	// TODO Auto-generated destructor stub
}

bool operator== (const Vehiculo& c1, const Vehiculo& c2){
	return (c1.nro == c2.nro);
};


