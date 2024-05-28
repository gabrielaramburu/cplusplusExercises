/*
 * Vehiculo.h
 *
 *  Created on: 28 may 2024
 *      Author: gabriel
 */

#ifndef VEHICULO_H_
#define VEHICULO_H_
#include <string>
#include <list>
#include "Cliente.h"
using namespace std;

class Vehiculo {


public:
	int nro;
	string matricula;
	Cliente* duenioActual;
	list<Cliente*> dueniosAnteriores;

	Vehiculo();
	Vehiculo(int nro, string mat, Cliente* duenioActual);
	virtual ~Vehiculo();

};

#endif /* VEHICULO_H_ */
