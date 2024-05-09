/*
 * SimuladorTransporteCarga.cpp
 *
 *  Created on: 9 may 2024
 *      Author: gabriel
 */

#include "SimuladorTransporteCarga.h"
#include "ITransporte.h";
#include <iostream>

using namespace std;

SimuladorTransporteCarga::SimuladorTransporteCarga(ITransporte* iTrans) {
	this->itrans= iTrans;

}

SimuladorTransporteCarga::~SimuladorTransporteCarga() {
	// TODO Auto-generated destructor stub
}

//Algoritmo principal, que tiene lógica comun
//La lógica particular está dentro de cada implementación (estrategia)
void SimuladorTransporteCarga::simularTransporte() {
	cout << "Comienza simulacion:";
	cout << this->itrans->descTransporte() << endl;
	cout << "Costo: ";
	cout << this->itrans->calcularCosto();
	cout << endl;
	cout << "Duración:";
	cout << this->itrans->calcularDuracion();

}

