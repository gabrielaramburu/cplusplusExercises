/*
 * Perro.h
 *
 *  Created on: 7 may 2024
 *      Author: gabriel
 */

#ifndef PERRO_H_
#define PERRO_H_

#include "Placentario.h"

class Perro: public Placentario {
public:
	Perro();
	virtual ~Perro();
	virtual void emitirSonido();
};

#endif /* PERRO_H_ */
