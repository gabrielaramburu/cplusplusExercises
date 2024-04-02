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
private:

public:
	Molusco();
	Molusco(int tam);
	virtual ~Molusco();
	void virtual mostrarTamanio();
	void mostrarAlgoDelMolusco();

};

#endif /* MOLUSCO_H_ */
