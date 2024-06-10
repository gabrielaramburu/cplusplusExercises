/*
 * Sistema.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "Sistema.h"


Sistema* Sistema::miSistema=nullptr;

Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}

Sistema* Sistema::getInstance() {
	if (Sistema::miSistema==nullptr){
		Sistema::miSistema == new Sistema();
		Sistema::miSistema->inicializarDatos();
	}
	return Sistema::miSistema;

}

Sistema::Sistema() {

}

void Sistema::inicializarDatos() {
	//inicializo los idiomas del sistema


	cout << "Comienza inicializacion Sistema " << endl;

	Idioma *idioma1 = new Idioma("Ingles");
	Idioma *idioma2 = new Idioma("Espaniol");
	Idioma *idioma3 = new Idioma("Aleman");

	cout << "Fin inicializacion Sistema2 " << endl;
	Sistema::miSistema->idiomas.insert(idioma1);
	cout << "Fin inicializacion Sistema3 " << endl;
	this->idiomas.insert(idioma2);
	this->idiomas.insert(idioma3);


	Usuario *usr1 = new Estudiante("pp","pass1","nombre1","desc1","pais1");
	this->usuarios.insert(usr1);

	cout << "Fin inicializacion Sistema " << endl;
}


