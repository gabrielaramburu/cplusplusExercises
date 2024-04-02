/*
 * Mamifero.h
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#ifndef MAMIFERO_H_
#define MAMIFERO_H_
#include "Vertebrado.h"

class Mamifero : public Vertebrado{
private:
	int tiempoGestion;
public:
	Mamifero();
	Mamifero(int tamanio);
	virtual ~Mamifero();
};

#endif /* MAMIFERO_H_ */
