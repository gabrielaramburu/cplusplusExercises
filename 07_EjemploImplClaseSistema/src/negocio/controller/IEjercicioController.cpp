/*
 * IEjercicioController.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "IEjercicioController.h"
#include "../dominio/Usuario.h"
#include "../dominio/Profesor.h"
#include "../dominio/Estudiante.h"
#include <set>

IEjercicioController::IEjercicioController() {
	//obtendo la unica instancia del Sistema
	this->sistema = Sistema::getInstance();

}

IEjercicioController::~IEjercicioController() {
	// TODO Auto-generated destructor stub
}

void IEjercicioController::realizarEjercicio(string nick) {
	set<Usuario*>::iterator it;
	for (it = this->sistema->usuarios.begin(); it != this->sistema->usuarios.end(); it++) {
		cout << "Usuario encontrado: " << (*it)->getNombre() << endl;
	}
}
