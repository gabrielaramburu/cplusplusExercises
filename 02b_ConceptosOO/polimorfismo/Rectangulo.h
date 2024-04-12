/*
 * Rectangulo.h
 *
 *  Created on: 21 mar 2024
 *      Author: gabriel
 */

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Figura.h"

class Rectangulo : public Figura{
public:
	Rectangulo();
	virtual ~Rectangulo();
	float virtual calcularArea();
	virtual string toString();
};

#endif /* RECTANGULO_H_ */
