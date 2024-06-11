/*
 * AltaUsuario.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "AltaUsuario.h"
#include <iostream>
#include <set>
#include "../negocio/controller/IUsuarioController.h"

#include "../negocio/dto/DTOEstudiante.h"
#include "../negocio/dto/DTOProfesor.h"

using namespace std;



AltaUsuario::AltaUsuario() {
	//TODO pendiente de usar una fabrica
	this->iusuario = new IUsuarioController();
}

AltaUsuario::~AltaUsuario() {
	//El controlador solo dura lo que dura el caso de uso
	delete this->iusuario;
}

void AltaUsuario::altaUsuario() {

	string nick;
	cout << "Ingrese nick:"<< endl;
	cin >> nick;

	bool existe = this->iusuario->verificarNick(nick);
	if (!existe) {
		cout << "Es estudiante o profesor? (1 estudiante 2 profesor" << endl;
		int tipoUsuario;
		DTOUsuario *nuevoUsuario;

		cin >> tipoUsuario;
		if (tipoUsuario == 1) {
			nuevoUsuario = ingresarEstudiante(nick);

		} else {
			nuevoUsuario = ingresarProfesor(nick);
		}

		this->iusuario->agregarUsuario(nuevoUsuario);

		cout << "Fin ingreso de usuario " << endl;

	} else  {
		cout << "Ya existe el usuario. Imposible continuar..." << endl;
	}
}


DTOEstudiante* AltaUsuario::ingresarEstudiante(string nick) {
	//TODO evitar duplicar este codigo
	string pass;
	string nom;
	string descrip;
	string pais;

	cout << "Ingresar pass:" << endl;
	cin >> pass;
	cout << "Ingresar nombre:" << endl;
	cin >> nom;
	cout << "Ingresar descripcion:" << endl;
	cin >> descrip;

	cout << "Ingresar pais:" << endl;
	cin >> pais;

	DTOEstudiante * nuevoEstudiante = new DTOEstudiante(
			nick,
			pass,
			nom,
			descrip,
			pais
			);

	return nuevoEstudiante;
}

DTOProfesor* AltaUsuario::ingresarProfesor(string nick) {
	//TODO evitar duplicar este codigo
		string pass;
		string nom;
		string descrip;
		string instituto;
		set<string> idiomas;

		cout << "Ingresar pass:" << endl;
		cin >> pass;
		cout << "Ingresar nombre:" << endl;
		cin >> nom;
		cout << "Ingresar descripcion:" << endl;
		cin >> descrip;
		cout << "Ingresar instituto:" << endl;
		cin >> instituto;

		int agregarIdioma;
		cout << " ¿Desea agregar idiomas? (1=si 2 =no)? " <<endl;
		cin >> agregarIdioma;
		if (agregarIdioma == 1) {
			idiomas = seleccionarIdiomas();
		} else {
			cout << "No se seleccionan idiomas " << endl;
		}

		DTOProfesor * nuevoProfesor = new DTOProfesor(
				nick,
				pass,
				nom,
				descrip,
				instituto,
				idiomas
				);

		return nuevoProfesor;
}

set<string> AltaUsuario::seleccionarIdiomas() {
	set<string> idiomasExistentes = this->iusuario->listIdiomas();
	set<string> idiomasSeleccionados;

	set<string>::iterator it;
	for (it = idiomasExistentes.begin(); it != idiomasExistentes.end(); it++) {
		cout << "Idioma: " << *it << endl;
	}
	string idioma;
	bool quiereIngresarIdiomas = true;
	do {
		cout << "Ingrese un idioma de la lista: (S/s para salir)" << endl;
		cin >> idioma;
		if (idioma != "S" && idioma != "s") {
			it = idiomasExistentes.find(idioma);
			if (it != idiomasExistentes.end()) {
				//solo selecciono los idiomas que existen
				idiomasSeleccionados.insert(idioma);
				cout << "Idioma ingresado: " << idioma  << endl;
			} else {
				cout << "El idioma ingresado no existe" << endl;
			}
		} else {
			quiereIngresarIdiomas = false;
		}

	} while (quiereIngresarIdiomas);
	return idiomasSeleccionados;
}

