/*
 * Profesor.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "Profesor.h"

Profesor::Profesor(string nick, string pass, string nom, string descrip, string instituto) {
	// TODO Auto-generated constructor stub
	this->nick = nick;
	this->pass = pass;
	this->nom = nom;
	this->descrip = descrip;
	this->instituto = instituto;
}

Profesor::~Profesor() {
	// TODO Auto-generated destructor stub
}

void Profesor::agregarIdioma(Idioma* idioma) {
	this->idiomas.insert(idioma);
}

