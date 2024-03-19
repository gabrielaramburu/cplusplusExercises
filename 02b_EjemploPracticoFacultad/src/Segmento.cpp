/*
 * Segmento.cpp
 *
 *  Created on: 17 mar 2024
 *      Author: gabriel
 */
#include <iostream>
#include "Segmento.h"

using namespace std;

Segmento::Segmento() {
	// TODO Auto-generated constructor stub

}

Segmento::Segmento(Coordenada c1,Coordenada c2, int x){
	//x es solo para evitar error de sobrecarga al compilar.
	this->ext1 = c1;
	this->ext2 = c2;

}

Segmento::Segmento(Coordenada &c1,Coordenada &c2){
	this->ext1 = c1;
	this->ext2 = c2;
}


Segmento::~Segmento() {
	// TODO Auto-generated destructor stub
}

void Segmento::mostrar(){
	cout << "Mostrando segmento" << endl;
	this->ext1.mostrar();
	this->ext2.mostrar();
}

