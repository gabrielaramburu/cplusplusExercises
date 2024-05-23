/*
 * Usuario.h
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#ifndef LOGICA_USUARIO_H_
#define LOGICA_USUARIO_H_
#include <iostream>

using namespace std;

class Usuario {
private:
	string nick;
	string pass;

	int intentosError;

public:
	Usuario(string nick, string pass);
	virtual ~Usuario();

	string getNick();

	bool validarContrasenia(string pass);
	bool estaBloqueado();

};

#endif /* LOGICA_USUARIO_H_ */
