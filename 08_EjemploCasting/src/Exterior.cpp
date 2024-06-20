/*
 * Exterior.h
 *
 *  Created on: 19 jun 2024
 *      Author: gabriel
 */


#include "Exterior.h"

Exterior::Exterior(const string &nombre, double altura,
		const string &resistenciaFrio) {
	this->altura = altura;
	this->nombre = nombre;
	this->resistenciaFrio = resistenciaFrio;

}

void Exterior::mostrarInfo() {
	cout << "Exterior " << nombre << "; ResistenciaFrio: " << resistenciaFrio
	<< endl;
}


Exterior::Exterior() {
	// TODO Auto-generated constructor stub

}

Exterior::~Exterior() {
	// TODO Auto-generated destructor stub
}



