/*
 * Persona.cpp
 *
 *  Created on: 13 mar 2024
 *      Author: gabriel
 */

#include <string>
#include <iostream>
#include "Persona.h"
using namespace std;

Persona::Persona() {
	// TODO Auto-generated constructor stub

}

Persona::~Persona() {
	cout<< "La persona con cedula " << this->cedula << " fue eliminada" << endl;
}

Persona::Persona(string nombre, string apellido, int cedula) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->cedula = cedula;
}

string Persona::getApellido() const {
	return this->apellido;
}

void Persona::setApellido(string apellido) {
	this->apellido = apellido;
}

int Persona::getCedula() {
	return cedula;
}

void Persona::setCedula(int cedula) {
	this->cedula = cedula;
}

string Persona::getNombre() const {
	return nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

void Persona::saludar()  {
	cout << "Hola, mi nombre es: " << this->nombre << " " << this->apellido <<endl;
}

string Persona::darInformacionPersonal() {
	return  to_string(this->cedula) + " " + this->nombre + " " + this->apellido;
}


