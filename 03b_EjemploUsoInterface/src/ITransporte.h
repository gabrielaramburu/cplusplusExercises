/*
 * ITransporte.h
 *
 *  Created on: 9 may 2024
 *      Author: gabriel
 */

#ifndef ITRANSPORTE_H_
#define ITRANSPORTE_H_
#include <iostream>
using namespace std;

class ITransporte {
public:
	virtual int calcularDuracion()=0;
	virtual int calcularCosto()=0;
	virtual string descTransporte()=0;
};

#endif /* ITRANSPORTE_H_ */
