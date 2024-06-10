/*
 * Idioma.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_DOMINIO_IDIOMA_H_
#define NEGOCIO_DOMINIO_IDIOMA_H_
#include <iostream>
using namespace std;

class Idioma {
private:
	string nomIdioma;
public:
	Idioma();
	Idioma(string idioma);
	virtual ~Idioma();
	string getNomIdioma();
};

#endif /* NEGOCIO_DOMINIO_IDIOMA_H_ */
