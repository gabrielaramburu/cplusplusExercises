/*
 * Automovil.h
 *
 *  Created on: 9 may 2024
 *      Author: gabriel
 */

#ifndef AUTOMOVIL_H_
#define AUTOMOVIL_H_

#include "ITransporte.h"

class Automovil : public ITransporte{
public:
	Automovil();
	virtual ~Automovil();

	virtual int calcularDuracion();
	virtual int calcularCosto();
	virtual std::string descTransporte();
};

#endif /* AUTOMOVIL_H_ */
