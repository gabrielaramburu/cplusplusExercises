/*
 * Molusco.h
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#ifndef MOLUSCO_H_
#define MOLUSCO_H_
#include "Invertebrado.h";
#include <iostream>

using namespace std;

class Molusco : public Invertebrado{
private:

public:
	Molusco();
	Molusco(int tam);
	virtual ~Molusco();
	void virtual mostrarTamanio();
	void mostrarAlgoDelMolusco();

	//sobre escribo operador <<
	friend ostream& operator<<(ostream& os, Molusco* p);
};

#endif /* MOLUSCO_H_ */
