/*
 * Login.cpp
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#include "Login.h"

#include <iostream>
#include <string>

#include "../logica/controlador/SistemaControlador.h"
#include "../logica/interfaceSistema/ISistema.h"


using namespace std;

Login::Login() {
	// TODO Auto-generated constructor stub

}

Login::~Login() {
	// TODO Auto-generated destructor stub
}

void Login::pedirCredenciales() {

	//notese que si bien estamos usando la interface ISistema,
	//estamos haciendo un new de su implementacioón
	//por lo tanto el desacoplamiento que tenemos es un bajo
	//mojoraremos esto utilizando el patrón Factory en futuras versiones

	ISistema *iSistema = new SistemaControlador();
	string nick, pass;

	cout << " ** Login ** " << endl;
	cout << "Ingrese nick: ";
	cin >> nick;
	cout << endl;
	cout << "Ingrese pass: ";
	cin >> pass;

	cout << iSistema->ingresar(nick, pass);
}



