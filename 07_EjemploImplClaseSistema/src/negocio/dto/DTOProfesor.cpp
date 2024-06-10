/*
 * DTOProfesor.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "DTOProfesor.h"

DTOProfesor::DTOProfesor() {
	// TODO Auto-generated constructor stub

}

DTOProfesor::~DTOProfesor() {
	// TODO Auto-generated destructor stub
}

DTOProfesor::DTOProfesor(string nick, string pass,
		string nom,	string descrip, string instituto,
		set<string> idiomas) {
			this->nick = nick;
			this->pass = pass;
			this->nom = nom;
			this->descrip = descrip;
			this->instituto = instituto;
			this->idiomas = idiomas;

}

