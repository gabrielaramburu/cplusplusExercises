/*
 * Bicicleta.h
 *
 *  Created on: 9 may 2024
 *      Author: gabriel
 */

#ifndef BICICLETA_H_
#define BICICLETA_H_

#include "ITransporte.h"

class Bicicleta :public ITransporte{
public:
	Bicicleta();
	virtual ~Bicicleta();

	virtual int calcularDuracion();
	virtual int calcularCosto();
	virtual string descTransporte();
};

#endif /* BICICLETA_H_ */
