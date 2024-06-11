/*
 * Usuario.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "Usuario.h"

Usuario::Usuario() {
	// TODO Auto-generated constructor stub

}

Usuario::Usuario(string nick) {
	this->nick = nick;

}

Usuario::~Usuario() {
	// TODO Auto-generated destructor stub
}

string Usuario::getNombre() {
	return this->nom;
}

string Usuario::getNick() {
	return this->nick;
}
