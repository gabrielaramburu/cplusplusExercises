/*
 * Gato.h
 *
 *  Created on: 7 may 2024
 *      Author: gabriel
 */

#ifndef GATO_H_
#define GATO_H_

#include "Placentario.h"

class Gato: public Placentario {
public:
	Gato();
	virtual ~Gato();
	virtual void emitirSonido();
};

#endif /* GATO_H_ */
