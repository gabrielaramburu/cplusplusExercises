/*
 * Coordenada.cpp
 *
 *  Created on: 17 mar 2024
 *      Author: gabriel
 */

#include <iostream>
#include "Coordenada.h"
using namespace std;

Coordenada::Coordenada() {
	x = 0;
	y = 0;
}

Coordenada::Coordenada(int x, int y) {
	this->x = x;
	this->y = y;
}

Coordenada::Coordenada(Coordenada& c) { //paso parámetro como referencia
	this->x = c.x;
	this->y = c.y;
}




Coordenada::~Coordenada() {
	cout << "Destruyendo coordenada x:" + to_string(this->x) + " y: " + to_string(this->y);
	cout << endl;
}

void Coordenada::setX(int x) {
	this->x = x;
}
void Coordenada::setY(int y){
	(*this).y = y;
}
int Coordenada::getX(){
	return x;
}
int Coordenada::getY(){
	return this->y;
}

void Coordenada::mostrar() {
	cout << "Coordenada x:" + to_string(this->x) + " y: " + to_string(this->y);
	cout << endl;
}
