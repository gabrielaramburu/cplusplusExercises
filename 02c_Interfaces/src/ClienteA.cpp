/*
 * ClienteA.cpp
 *
 *  Created on: 7 may 2024
 *      Author: gabriel
 */

#include "ClienteA.h"
#include "InterfaceA.h"
#include "iostream"

using namespace std;

ClienteA::ClienteA(InterfaceA *i) {
	//cuando construyo una instancia del objeto ya le asigno una implementación de la interface
	this->servicio = i;
}

ClienteA::~ClienteA() {
	// TODO Auto-generated destructor stub
}

void ClienteA::hacerAlgo() {
	cout << "*** haciendo algo en ClienteA" << endl;
	this->servicio->operacion1();
	this->servicio->operacion2();
}
