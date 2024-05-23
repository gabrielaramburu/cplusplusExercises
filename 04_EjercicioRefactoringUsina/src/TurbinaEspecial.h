/*
 * TurbinaEspecial.h
 *
 *  Created on: 23 may 2024
 *      Author: gabriel
 */

#ifndef TURBINAESPECIAL_H_
#define TURBINAESPECIAL_H_

#include "Turbina.h"

class TurbinaEspecial : public Turbina {
private:
	int coeficiente;

public:
	TurbinaEspecial();
	TurbinaEspecial(bool activa, double potencia, int coef);
	virtual ~TurbinaEspecial();
	virtual double calcularPotencia();
	int getCoeficiente();
};

#endif /* TURBINAESPECIAL_H_ */
