/*
 * Triangulo.h
 *
 *  Created on: 21 mar 2024
 *      Author: gabriel
 */

#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "Figura.h"

class Triangulo : public Figura{
public:
	Triangulo();
	virtual ~Triangulo();
	float virtual calcularArea();
};

#endif /* TRIANGULO_H_ */
