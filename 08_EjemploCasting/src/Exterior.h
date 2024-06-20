/*
 * Exterior.h
 *
 *  Created on: 19 jun 2024
 *      Author: gabriel
 */

#ifndef EXTERIOR_H_
#define EXTERIOR_H_
#include "Planta.h"

class Exterior: public Planta {
private:
	string resistenciaFrio;

public:
	Exterior(const string &nombre, double altura, const string &resistenciaFrio
			) ;

	virtual void mostrarInfo();

	Exterior();
	virtual ~Exterior();
};

#endif /* EXTERIOR_H_ */
