/*
 * Idioma.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "Idioma.h"

Idioma::Idioma() {
	// TODO Auto-generated constructor stub

}

Idioma::Idioma(string nomIdioma) {
	this->nomIdioma = nomIdioma;
}

Idioma::~Idioma() {
	// TODO Auto-generated destructor stub
}

string Idioma::getNomIdioma() {
	return this->nomIdioma;
}

