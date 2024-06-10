/*
 * DTOEstudiante.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_DTO_DTOESTUDIANTE_H_
#define NEGOCIO_DTO_DTOESTUDIANTE_H_

#include "DTOUsuario.h"
#include <iostream>

using namespace std;

class DTOEstudiante:public DTOUsuario {
public:
	string paisResidencia;

	DTOEstudiante();
	DTOEstudiante(string nick, string pass,	string nom,	string descrip, string pais);
	virtual ~DTOEstudiante();
};

#endif /* NEGOCIO_DTO_DTOESTUDIANTE_H_ */
