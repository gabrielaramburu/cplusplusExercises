/*
 * Vehiculo.h
 *
 *  Created on: 28 may 2024
 *      Author: gabriel
 */

#ifndef VEHICULO_H_
#define VEHICULO_H_

#include <string>

using namespace std;

class Vehiculo {


public:
	int nro;
	string matricula;


	Vehiculo();
	Vehiculo(int nro, string mat);
	virtual ~Vehiculo();

	friend bool operator== (const Vehiculo& c1, const Vehiculo& c2);

};


#endif /* VEHICULO_H_ */
