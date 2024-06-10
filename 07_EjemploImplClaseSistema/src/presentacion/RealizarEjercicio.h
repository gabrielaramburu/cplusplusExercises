/*
 * RealizarEjercicio.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef PRESENTACION_REALIZAREJERCICIO_H_
#define PRESENTACION_REALIZAREJERCICIO_H_
#include "../negocio/controller/IEjercicio.h"

class RealizarEjercicio {
private:
	IEjercicio* iejercicio;

public:
	RealizarEjercicio();
	virtual ~RealizarEjercicio();
	void realizarEjercicio();
};

#endif /* PRESENTACION_REALIZAREJERCICIO_H_ */
