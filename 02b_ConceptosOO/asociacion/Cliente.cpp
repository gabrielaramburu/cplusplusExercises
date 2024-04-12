/*
 * Cliente.cpp
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#include "Cliente.h"

#include <iostream>;
#include "Cuenta.h"

using namespace std;

Cliente::Cliente() {

}

Cliente::Cliente(int id, string nombre, Cuenta c) {
	this->id = id;
	this->nombre = nombre;
	this->cuenta = c;
}

Cliente::~Cliente() {
	// TODO Auto-generated destructor stub
}

//paramtro por referencia
void Cliente::agregarTransaccion(Transaccion &t) {
	this->transacciones.push_front(t);

}
//parámetro por puntero
void Cliente::agregarTransaccion2(Transaccion *t) {
	this->transacciones.push_front(*t);

}

void Cliente::listarTransacciones() {
	list<Transaccion>::iterator it;
	for (it = this->transacciones.begin(); it != this->transacciones.end(); ++it) {
		((Transaccion)*it).mostrar();
	}

	cout << endl;
}

