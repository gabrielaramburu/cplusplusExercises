/*
 * Usuario.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_USUARIO_H_
#define NEGOCIO_USUARIO_H_
#include <iostream>
#include "../interfaces/ICollectible.h"
using namespace std;

class Usuario : public ICollectible{
private:
	string nick;
	string pass;
	string nom;
	string descrip;

public:
	Usuario();
	Usuario(string nick, string nombre, string pass);
	virtual ~Usuario();
	string getNombre();
	string getNick();

};

#endif /* NEGOCIO_USUARIO_H_ */
