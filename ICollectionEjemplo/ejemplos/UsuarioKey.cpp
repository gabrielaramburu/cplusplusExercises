/*
 * UsuarioKey.cpp
 *
 *  Created on: 11 jun 2024
 *      Author: gabriel
 */

#include "UsuarioKey.h"
#include "../interfaces/OrderedKey.h"


UsuarioKey::UsuarioKey() {
	// TODO Auto-generated constructor stub

}

UsuarioKey::UsuarioKey(string nick) {
	this->nick = nick;

}

UsuarioKey::~UsuarioKey() {
	// TODO Auto-generated destructor stub
}


ComparisonRes UsuarioKey::compare(OrderedKey *k) const {
	 UsuarioKey *key = dynamic_cast<UsuarioKey *>(k);
	 if (key->nick == this->nick) {

		return ComparisonRes::EQUAL;
	} else {
		if (key->nick > this->nick) {
			return ComparisonRes::GREATER;
		} else {
			return ComparisonRes::LESSER;
		}
	}

}
