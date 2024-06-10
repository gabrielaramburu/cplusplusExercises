/*
 * Profesor.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_DOMINIO_PROFESOR_H_
#define NEGOCIO_DOMINIO_PROFESOR_H_
#include "Idioma.h"
#include "Usuario.h"
#include <set>

using namespace std;


class Profesor: public Usuario{
private:
	string instituto;
	set<Idioma*> idiomas;

public:
	Profesor(string nick, string pass, string nom,	string descrip, string instituto);
	virtual ~Profesor();
	void agregarIdioma(Idioma* idioma);
};

#endif /* NEGOCIO_DOMINIO_PROFESOR_H_ */
