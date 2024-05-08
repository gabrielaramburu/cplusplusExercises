/*
 * SistemaControlador.cpp
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#include "SistemaControlador.h"

#include <string>

#include "../Sistema.h"

SistemaControlador::SistemaControlador() {
	//siempre que instancio un controlador, intancio sus dependencias
	///en este caso la clase Sistema.
	this->sistema = new Sistema();

}

SistemaControlador::~SistemaControlador() {
	// TODO Auto-generated destructor stub
}

string SistemaControlador::ingresar(string nick, string pass) {
	//en este caso muy sencillo, el controlador actua de "paso mano"
	//por lo que es posible que no le encutre mucho sentido
	//en caso de usos más complejos el controlador cumple el rol de
	//"orquestador", por ahor lo mantemos simple.
	return this->sistema->ingresar(nick, pass);
}

