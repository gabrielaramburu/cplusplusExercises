/*
 * Molusco.h
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#ifndef MOLUSCO_H_
#define MOLUSCO_H_
#include "Invertebrado.h";

class Molusco : public Invertebrado{
public:
	Molusco();
	Molusco(int tam);
	virtual ~Molusco();
	void virtual mostrarTamanio();
};

#endif /* MOLUSCO_H_ */
