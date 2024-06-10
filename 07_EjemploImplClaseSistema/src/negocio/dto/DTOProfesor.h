/*
 * DTOProfesor.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_DTO_DTOPROFESOR_H_
#define NEGOCIO_DTO_DTOPROFESOR_H_

#include "DTOUsuario.h"
#include <iostream>
#include <set>

using namespace std;

class DTOProfesor: public DTOUsuario {


public:
	string instituto;
	set <string> idiomas;

	DTOProfesor(string nick, string pass, string nom,
			string descrip, string instituto, set<string> idiomas);
	DTOProfesor();
	virtual ~DTOProfesor();

};

#endif /* NEGOCIO_DTO_DTOPROFESOR_H_ */
