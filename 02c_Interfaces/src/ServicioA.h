/*
 * ServicioA.h
 *
 *  Created on: 7 may 2024
 *      Author: gabriel
 */

#ifndef SERVICIOA_H_
#define SERVICIOA_H_

#include "InterfaceA.h"

//ServiciosA implementa la interface
class ServicioA: public InterfaceA {
public:
	ServicioA();
	virtual ~ServicioA();

	void operacion1();
	void operacion2();

};

#endif /* SERVICIOA_H_ */
