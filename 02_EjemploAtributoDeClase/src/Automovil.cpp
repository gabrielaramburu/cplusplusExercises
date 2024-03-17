/*
 * Automovil.cpp
 *
 *  Created on: 17 mar 2024
 *      Author: gabriel
 */

#include "Automovil.h"

#include <iostream>
#include <string>

//es necesario agregar esta definición fuera de la clase
int Automovil::contador = 0;
int Automovil::contadorPrivado = 0;

Automovil::Automovil(){
	//siempre que creo un automovil incremento el contador
	contador++;
}

Automovil::Automovil(int id, string marca) {
	Automovil();	//desde un constructor puedo llamar a otro.
	this->id = id;
	this->marca = marca;

	if (marca == "Ford") {
		contadorPrivado++;
	}

}

Automovil::~Automovil() {

}

void Automovil::setMarca(string marca){
	this->marca = marca;
}
string Automovil::getMarca() {
	return this->marca;
}

void Automovil::setId(int id) {
	this->id = id;
}

int Automovil::getId(){
	return this->id;
}


void Automovil::mostrarInformacion(){
	string info = "Información del automovil: ";
	info = info + "id " + to_string(this->id) +	" marca: " + this->marca;
	cout << info << endl;

}

int Automovil::obtenerContadorPrivado() {
	//Queriendo acceder a un atributo de instancia desde un metodo de clase
	//esto no compila
	//cout << this->marca;
	return contadorPrivado;
}
