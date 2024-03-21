/*
 * Molusco.cpp
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#include "Molusco.h"

#include <iostream>

using namespace std;

Molusco::Molusco() {
	// TODO Auto-generated constructor stub

}

void Molusco::mostrarTamanio() {
	//estoy redefiniendo esta operación,
	//notese que la misma ya está implementada en la clase
	//padre
	cout << "Tamaño del molusco: " << this->tamanio << endl;
}

Molusco::~Molusco() {
	// TODO Auto-generated destructor stub
}

Molusco::Molusco(int tam) {
	this->tamanio = tam;
}

