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
}
