/*
 * UsuarioKey.h
 *
 *  Created on: 11 jun 2024
 *      Author: gabriel
 */

#ifndef EJEMPLOS_USUARIOKEY_H_
#define EJEMPLOS_USUARIOKEY_H_
#include "../interfaces/OrderedKey.h"
#include <iostream>
using namespace std;

class UsuarioKey: public OrderedKey {

public:
	string nick;
	UsuarioKey();
	UsuarioKey(string key);
	virtual ~UsuarioKey();
	ComparisonRes compare(OrderedKey *k) const;
};

#endif /* EJEMPLOS_USUARIOKEY_H_ */
