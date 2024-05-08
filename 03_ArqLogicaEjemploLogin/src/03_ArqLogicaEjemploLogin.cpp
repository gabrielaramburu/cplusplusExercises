//============================================================================
// Name        : 03_ArqLogicaEjemploLogin.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "presentacion/Login.h"

int main() {
	Login * log = new Login();
	log->pedirCredenciales();
	return 0;
}
