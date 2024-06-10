/*
 * DTOEstudiante.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "DTOEstudiante.h"
#include <iostream>
using namespace std;

DTOEstudiante::DTOEstudiante() {
	// TODO Auto-generated constructor stub

}

DTOEstudiante::~DTOEstudiante() {
	// TODO Auto-generated destructor stub
}

DTOEstudiante::DTOEstudiante(
		string nick, string pass,	string nom,
		string descrip, string pais) {

		this->nick = nick;
		this->pass = pass;
		this->nom = nom;
		this->descrip = descrip;
		this->paisResidencia = pais;

}

