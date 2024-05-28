/*
 * Cliente.h
 *
 *  Created on: 28 may 2024
 *      Author: gabriel
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
using namespace std;

class Cliente {


public:
	int nroCli;
	string nombre;
	Cliente();
	Cliente(int nroCli, string nombre);
	virtual ~Cliente();
};

#endif /* CLIENTE_H_ */
