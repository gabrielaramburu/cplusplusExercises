/*
 * IEjercicioController.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_CONTROLLER_IEJERCICIOCONTROLLER_H_
#define NEGOCIO_CONTROLLER_IEJERCICIOCONTROLLER_H_

#include "IEjercicio.h"
#include "Sistema.h"

class IEjercicioController : public IEjercicio{
private:
	//Cada controlador tiene acceso a la instancia del Sistema
	Sistema* sistema;


public:
	void realizarEjercicio(string nick);

	IEjercicioController();
	virtual ~IEjercicioController();
};

#endif /* NEGOCIO_CONTROLLER_IEJERCICIOCONTROLLER_H_ */
