/*
 * Turbina.h
 *
 *  Created on: 23 may 2024
 *      Author: gabriel
 */

#ifndef TURBINA_H_
#define TURBINA_H_

class Turbina {
public:
	bool activa;
	double potencia;

public:
	Turbina();
	Turbina(bool activa, double potencia);
	virtual ~Turbina();
	virtual double calcularPotencia();
	double getPotencia();
};

#endif /* TURBINA_H_ */
