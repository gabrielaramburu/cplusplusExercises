/*
 * Placentario.h
 *
 *  Created on: 7 may 2024
 *      Author: gabriel
 */

#ifndef PLACENTARIO_H_
#define PLACENTARIO_H_

#include "Mamifero.h"

class Placentario: public Mamifero {
public:
	virtual void emitirSonido();
};

#endif /* PLACENTARIO_H_ */
