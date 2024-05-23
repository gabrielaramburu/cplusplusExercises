/*
 * Sistema.cpp
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#include "Sistema.h"
#include <list>

Sistema::Sistema() {

	usuarios.push_back(new Usuario("pepe","111"));
	usuarios.push_back(new Usuario("luis","222"));

}

Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}

string Sistema::ingresar(string nick, string pass) {
	string mensajeRetorno = "*** Usuario o contrasenia incorrecto";
	list<Usuario*>::iterator it;
	for (it = this->usuarios.begin(); it != this->usuarios.end(); ++it) {
		if ((*it)->getNick() == nick) {
			cout << "encontre usuario " << endl;

				if ((*it)->validarContrasenia(pass)) {
					mensajeRetorno = "*** Bienvenido";
					break;
				}


		}

	}
	return mensajeRetorno;
}

