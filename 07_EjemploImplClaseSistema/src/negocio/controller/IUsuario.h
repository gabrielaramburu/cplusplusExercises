/*
 * IUsuario.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_CONTROLLER_IUSUARIO_H_
#define NEGOCIO_CONTROLLER_IUSUARIO_H_
#include <iostream>;
#include <set>;
#include "../dto/DTOUsuario.h"

// Esta es una iterface del Sistema.

class IUsuario {
public:
	virtual bool verificarNick(string nick)=0;
	virtual set<string> listIdiomas()=0;
	virtual void agregarUsuario(DTOUsuario* usuario)=0;

};

#endif /* NEGOCIO_CONTROLLER_IUSUARIO_H_ */
