/*
 * IUsuarioController.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "IUsuarioController.h"
#include "../dto/DTOEstudiante.h"
#include "../dto/DTOUsuario.h"
#include "../dto/DTOProfesor.h"
#include "../dominio/Estudiante.h"
#include "../dominio/Profesor.h"
#include "../dominio/Usuario.h"
#include <set>

IUsuarioController::IUsuarioController() {
	//obtendo la unica instancia del Sistema
	this->sistema = Sistema::getInstance();
}

bool IUsuarioController::verificarNick(string nick) {
	//recorro los usuarios del sistema
	bool result = false;

	set<Usuario*>::iterator it;

	for (it = this->sistema->usuarios.begin(); it != this->sistema->usuarios.end(); it++) {
		if (nick == (*it)->getNick()) {
			result = true;
			break;
		}
	}
	return result;
}

set<string> IUsuarioController::listIdiomas() {
	//recorro los idiomas del sistema y retorno una set de string
	set<string> result;

	set<Idioma*>::iterator it;
	for (it = this->sistema->idiomas.begin(); it != this->sistema->idiomas.end(); it++) {
		result.insert((*it)->getNomIdioma());
	}
	return result;
}

void IUsuarioController::agregarUsuario(DTOUsuario* usuario) {
	Usuario *nuevoUsuario;
	DTOEstudiante* dtoEst = dynamic_cast<DTOEstudiante*>(usuario);
	//hago un casting para determinar el tipo de instancia
	if (dtoEst != nullptr) {
		//es un estudiante
		nuevoUsuario = new Estudiante(dtoEst->nick, dtoEst->pass,
				dtoEst->nom, dtoEst->descrip, dtoEst->paisResidencia);
	} else {
		DTOProfesor* dtoProf = dynamic_cast<DTOProfesor*>(usuario);

		//asumo que es un profesor
		nuevoUsuario = new Profesor(dtoProf->nick, dtoProf->pass,
				dtoProf->nom, dtoProf->descrip, dtoProf->instituto);

		set<string>::iterator it;
		for (it = dtoProf->idiomas.begin(); it != dtoProf->idiomas.end(); it++) {
			set<Idioma*>::iterator idioma = this->sistema->idiomas.find(new Idioma("Ingles"));

			if (idioma != this->sistema->idiomas.end()) {
				cout << "encontre idioma " << endl;
			}
		}
	}

	this->sistema->usuarios.insert(nuevoUsuario);
}

