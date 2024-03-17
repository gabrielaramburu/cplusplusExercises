/*
 * Automovil.cpp
 *
 *  Created on: 17 mar 2024
 *      Author: gabriel
 */

#include "Automovil.h"

#include <iostream>
#include <string>

Automovil::Automovil(){

}

Automovil::Automovil(int id, string marca, string modelo, int anio) {
	this->id = id;
	this->marca = marca;
	this->modelo = modelo;
	this->anioFabricacion = anio;

}

Automovil::~Automovil() {
	cout <<"El automovil con id " << this->id << " se ha destruido" << endl;
}

void Automovil::setMarca(string marca){
	this->marca = marca;
}
string Automovil::getMarca() {
	return this->marca;
}

void Automovil::setModelo(string modelo){
	this->modelo = modelo;
}
string Automovil::getModelo(){
	return this->modelo;
}

void Automovil::setAnioFabricacion(int anio){
	this->anioFabricacion = anio;
}
int Automovil::getAnioFabricacion(){
	return this->anioFabricacion;
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
	info = info + " modelo: " + this->modelo + " año fab.: " + to_string(this->anioFabricacion);
	cout << info << endl;
}
