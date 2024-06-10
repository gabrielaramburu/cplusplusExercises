/*
 * IEjercicio.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_CONTROLLER_IEJERCICIO_H_
#define NEGOCIO_CONTROLLER_IEJERCICIO_H_
#include <iostream>
using namespace std;

class IEjercicio {
public:

	virtual void realizarEjercicio(string nick)=0;
};

#endif /* NEGOCIO_CONTROLLER_IEJERCICIO_H_ */
