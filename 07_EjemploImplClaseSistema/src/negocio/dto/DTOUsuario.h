/*
 * DTOUsuario.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_DTO_DTOUSUARIO_H_
#define NEGOCIO_DTO_DTOUSUARIO_H_
#include <iostream>

using namespace std;

class DTOUsuario {
	//un DTO es un datatype, y un datatype debería de ser inmutable, por lo tanto
//teoricamente no puedo exponer el estado del objeto
//se implementan publicos para agilizar desarrollo del ejemplo
public:
	string nick;
	string pass;
	string nom;
	string descrip;

	DTOUsuario();
	virtual ~DTOUsuario();
};

#endif /* NEGOCIO_DTO_DTOUSUARIO_H_ */
