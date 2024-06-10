/*
 * IUsuarioController.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_CONTROLLER_IUSUARIOCONTROLLER_H_
#define NEGOCIO_CONTROLLER_IUSUARIOCONTROLLER_H_
#include <iostream>
#include <set>
#include "../dto/DTOUsuario.h";
#include "IUsuario.h";
#include "Sistema.h"

using namespace std;

class IUsuarioController:public IUsuario {
private:
	Sistema* sistema; //cada controlador de la aplicación tiene una instancia de la clase sistema
	//solo existe una instancia de la clase sistema en toda la aplicacion

public:
	IUsuarioController();

	bool verificarNick(string nick);
	set<string> listIdiomas();
	void agregarUsuario(DTOUsuario* usuario);
};

#endif /* NEGOCIO_CONTROLLER_IUSUARIOCONTROLLER_H_ */
