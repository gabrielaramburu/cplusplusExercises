/*
 * Estudiante.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_DOMINIO_ESTUDIANTE_H_
#define NEGOCIO_DOMINIO_ESTUDIANTE_H_

#include "Usuario.h"
#include <iostream>
using namespace std;

class Estudiante : public Usuario{
private:
	string paisResidencia;
public:
	Estudiante(string nick, string pass, string nom,	string descrip, string pais);
	virtual ~Estudiante();
};

#endif /* NEGOCIO_DOMINIO_ESTUDIANTE_H_ */
