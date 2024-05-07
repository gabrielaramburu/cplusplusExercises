//============================================================================
// Name        : 02c_Interfaces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "ClienteA.h"
#include "ServicioA.h"
#include <iostream>

using namespace std;

int main() {

	InterfaceA *serA = new ServicioA(); //creo instancia que implementa la interface

	ClienteA *cli = new ClienteA(serA); //creo instancia del cliente
	//le paso como parámetro del constructor una instancia del servicio


	cli->hacerAlgo();
	//mando a realizar algo al cliente


	//¿que gano con todo esto? ClienteA no está acoplado al ServicioA
	//esta acoplado a la interface (contrato)
	//por lo tanto eventualemnte puedo usar otra implementación (ejemplo: ServicioB)

	/* Ejercicio:
		crear una clase ServicioB que implemente la interface A.
		en ServicioB implementar los metodos operacion1 y operacion2 para que muestren mensajes en mayúsculas
		crear un nuevo cliente pasándole como dependencia una instancia de servicioB
		ejecutar la operacion hacerAlgo() del nuevo cliente creado()

	*/
	return 0;
}
