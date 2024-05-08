/*
 * Usuario.cpp
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#include "Usuario.h"
#include <iostream>

Usuario::Usuario(string nick, string pass) {
	this->nick = nick;
	this->pass = pass;
}

Usuario::~Usuario() {
	// TODO Auto-generated destructor stub
}

string Usuario::getNick() {
	return this->nick;
}

bool Usuario::validarContrasenia(string pass) {
	if (this->pass == pass) {
		cout << "pass correcta" << endl;
		return true;
	} else  {
		cout << "pass incorrecta" << endl;
		return false;
	}

}

