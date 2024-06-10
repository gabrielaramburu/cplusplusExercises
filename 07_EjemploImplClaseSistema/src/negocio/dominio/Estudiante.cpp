/*
 * Estudiante.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "Estudiante.h"

Estudiante::Estudiante(string nick, string pass,	string nom,	string descrip, string pais) {
	//los DTO son un pasamano para no acoplar la capa de presentación con la capa de negocio
	this->nick = nick;
	this->pass = pass;
	this->nom = nom;
	this->descrip = descrip;
	this->paisResidencia = pais;

}

Estudiante::~Estudiante() {
	// TODO Auto-generated destructor stub
}

