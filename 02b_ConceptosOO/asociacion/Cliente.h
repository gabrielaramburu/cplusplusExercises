/*
 * Cliente.h
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#ifndef ASOCIACIONES_CLIENTE_H_
#define ASOCIACIONES_CLIENTE_H_
#include <string>
#include <list>

#include "Cuenta.h"
#include "Transaccion.h"
using namespace std;

class Cliente {
private:
	int id;
	string nombre;
	Cuenta cuenta;
	list<Transaccion> transacciones;

public:
	Cliente();
	Cliente(int id, string nom, Cuenta c);
	virtual ~Cliente();
	void agregarTransaccion(Transaccion &t);
	void agregarTransaccion2(Transaccion *t);
	void listarTransacciones();

};

#endif /* ASOCIACIONES_CLIENTE_H_ */
