//============================================================================
// Name        : 03b_EjemploUsoInterface.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Automovil.h"
#include "Bicicleta.h"
#include "SimuladorTransporteCarga.h"

using namespace std;

int main() {
	SimuladorTransporteCarga *simulador;
	ITransporte *transporte;


	int tipoTransporte;
	cout << "*** Simulador de transporte de carga" << endl;
	cout << "Ingrese tipo transporte 1=bici, 2=auto";
	cin >> tipoTransporte;
	if (tipoTransporte == 1) {
		transporte = new Bicicleta();

	} else {
		transporte = new Automovil();
	}

	simulador = new SimuladorTransporteCarga(transporte);
	simulador->simularTransporte();
	return 0;

	/*
	 * Ejercicio:
	 * Tomando como idea la solución actual, diseñe e implemente
	   la siguiente funcionalidad:

	   Existe un modulo que generar reportes,
	    el cual realiza las siguientes operaciones:
	    	buscaInformacion
	    	procesa la misma
	    	y finalmente muestra el resultado

	    Existen dos tipos de reporte
	    	Reporte A, el cual obtiene información de la base de datos
	    	la agrupa por criterio A y muestra el resulado por pantalla

	    	Reporte B, el cual obtiene información de un servicio web
	    	la agrupa por criterio B y envia el resultado por mail

	    Implementar una solución que permita ejecutar los reportes
	    y que la misma sea extensible, para poder agregar facilmente
	    nuevos reportes en el futuro, sin afectar al funcionamiento de
	    los reportes ya existentes.
	   */
}
