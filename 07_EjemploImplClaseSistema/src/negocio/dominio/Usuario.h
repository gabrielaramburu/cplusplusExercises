/*
 * Usuario.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_USUARIO_H_
#define NEGOCIO_USUARIO_H_
#include <iostream>
using namespace std;

class Usuario {
protected:
	string nick;
	string pass;
	string nom;
	string descrip;

public:
	Usuario();
	Usuario(string nick);
	virtual ~Usuario();
	virtual string getNombre();
	virtual string getNick();
};

#endif /* NEGOCIO_USUARIO_H_ */
