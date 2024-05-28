
#include <iostream>
#include <list>
#include <algorithm>

#include "Cliente.h"
#include "Vehiculo.h"


using namespace std;

/* Ejercicio:
 *
 * Parte A:
 * Tomando como referencias los principios que guían el buen diseño orientado
 * a objetos y con la ayuda del diagrama de comunicación realizado en clases
 * refactorice este codigo para mejorar la calidad del mismo.
 *
 * Argumente cada decisión de diseño tomada.
 *
 *
 * */
int main() {
	list<Vehiculo*> vehiculos;
	list<Cliente*> clientes;

	Cliente *cli1 = new Cliente(1,"aaaaa");
	Cliente *cli2 = new Cliente(2,"bbbbb");
	Cliente *cli3 = new Cliente(3,"ccccc");

	clientes.push_back(cli1);
	clientes.push_back(cli2);
	clientes.push_back(cli3);


	Vehiculo *v1 = new Vehiculo(1,"baa 1111", cli1);
	Vehiculo *v2 = new Vehiculo(2,"baa 2222", nullptr);
	Vehiculo *v3 = new Vehiculo(3,"baa 3333", nullptr);

	vehiculos.push_back(v1);
	vehiculos.push_back(v2);
	vehiculos.push_back(v3);

	int nroCli = 0;
	int nroVehi = 0;
	cout << "Ingrese nro cliente:" << endl;
	cin >> nroCli;
	cout << "Ingrese nro vehiculo:" << endl;
	cin >> nroVehi;

	Vehiculo *vEncontrado = nullptr;
	list<Vehiculo*>::iterator itV;
	for (itV= vehiculos.begin(); itV != vehiculos.end(); ++itV) {
		if (((Vehiculo*)*itV)->nro == nroVehi) {
			vEncontrado = ((Vehiculo*)*itV);
			break;
		}
	}


	Cliente *cEncontrado = nullptr;
	list<Cliente*>::iterator itC;
	for (itC= clientes.begin(); itC != clientes.end(); itC++) {
		if (((Cliente*)*itC)->nroCli == nroCli) {
			cEncontrado = ((Cliente*)*itC);
			break;
		}
	}

	if (vEncontrado == nullptr) {
		cout << "no se encontro el vehiculo" << endl;
	} else if (cEncontrado == nullptr) {
		cout << "no se encontro el cliente" << endl;
	} else {
		if (vEncontrado->duenioActual != nullptr && vEncontrado->duenioActual->nroCli == nroCli) {
			cout << "El nuevo duenio no puede ser el duenio actual" << endl;
		} else {
			//esta todo bien
			Cliente* duenioActual = vEncontrado->duenioActual;
			vEncontrado->dueniosAnteriores.push_back(duenioActual);
			vEncontrado->duenioActual = cEncontrado;

			cout << "nuevo dueño : " << vEncontrado->duenioActual->nombre;

		}
	}



}


