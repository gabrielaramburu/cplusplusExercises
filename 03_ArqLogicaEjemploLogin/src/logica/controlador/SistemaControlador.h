/*
 * SistemaControlador.h
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#ifndef LOGICA_CONTROLADOR_SISTEMACONTROLADOR_H_
#define LOGICA_CONTROLADOR_SISTEMACONTROLADOR_H_

#include <string>

#include "../interfaceSistema/ISistema.h"
#include "../Sistema.h"

class SistemaControlador : public ISistema{

//en este caso el controlador tiene la responsabilidad de conocer
//las instancias de objetos que necesita
//
private:
	Sistema* sistema;

public:
	SistemaControlador();
	virtual ~SistemaControlador();

	virtual string ingresar(string nick, string pass);
};

#endif /* LOGICA_CONTROLADOR_SISTEMACONTROLADOR_H_ */
