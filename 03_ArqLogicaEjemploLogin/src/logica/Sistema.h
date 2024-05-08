/*
 * Sistema.h
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#ifndef LOGICA_SISTEMA_H_
#define LOGICA_SISTEMA_H_
#include <list>
#include "Usuario.h"
using namespace std;


class Sistema {
private:
	list<Usuario*> usuarios;


public:
	Sistema();
	virtual ~Sistema();
	string ingresar(string nick, string pass);
};

#endif /* LOGICA_SISTEMA_H_ */
