//============================================================================
// Name        : 08_EjemploCasting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include "Planta.h"
#include "Interior.h"
#include "Exterior.h"
using namespace std;

void ejemplodCastingEstatico();
void ejemplodCastingEstaticoConError();
void ejemplodCastingDinamico();
int main() {
	ejemplodCastingEstatico();
	ejemplodCastingEstaticoConError();
	ejemplodCastingDinamico();

	list<Planta*> listaDePlantas;
	listaDePlantas.push_back(new Interior("Helecho", 50, "Media", "Alta"));
	listaDePlantas.push_back(new Exterior("Rosa", 120, "Alta"));
	listaDePlantas.push_back(new Interior("Orquídea", 30, "Alta", "Media"));
	listaDePlantas.push_back(new Exterior("Cactus", 40, "Media"));

	return 0;
}

void ejemplodCastingEstatico() {
	cout << "*** Ejemplo de casting estatico " << endl;
	list<Planta*> plantasInteriores;
	plantasInteriores.push_back(new Interior("Helecho", 50, "Media", "Alta"));
	plantasInteriores.push_back(new Interior("Orquídea", 30, "Alta", "Media"));

	list<Planta*>::iterator it;
	for (it = plantasInteriores.begin(); it != plantasInteriores.end(); it++) {
		//(*it)->mostrarHumedad();
		//la linea anterior no compila ya que mostrarHumedad no es
		//un metodo de planta

		//solucion: hacer un casting (o downcasting) estatico
		Interior *aux = static_cast<Interior*>(*it);
		aux->mostrarHumedad();

		//las dos sentencias anteriores se pueden reescribir como
		//(dynamic_cast<Interior*>(*it))->mostrarHumedad();
	}

}

void ejemplodCastingEstaticoConError() {
	cout << "*** Ejemplo de casting estatico con error" << endl;
	list<Planta*> plantasInteriores;
	plantasInteriores.push_back(new Interior("Helecho", 50, "Media", "Alta"));
	plantasInteriores.push_back(new Interior("Orquídea", 30, "Alta", "Media"));

	//agrego una plata de exterior
	//plantasInteriores.push_back(new Exterior("Cactus", 40, "Media"));
	plantasInteriores.push_back(new Interior("Rosa", 40, "Alta", "Media"));

	list<Planta*>::iterator it;
	for (it = plantasInteriores.begin(); it != plantasInteriores.end(); it++) {

		//el código compila pero se produce un error en tiempo de ejcución
		Interior *aux = static_cast<Interior*>(*it);
		aux->mostrarHumedad();
	}
}

void ejemplodCastingDinamico() {
	cout << "*** Ejemplo de casting dinamico" << endl;
	list<Planta*> plantasInteriores;
	plantasInteriores.push_back(new Interior("Helecho", 50, "Media", "Alta"));
	plantasInteriores.push_back(new Interior("Orquídea", 30, "Alta", "Media"));

	//agrego una plata de exterior
	plantasInteriores.push_back(new Exterior("Cactus", 40, "Media"));
	plantasInteriores.push_back(new Interior("Rosa", 40, "Alta", "Media"));

	list<Planta*>::iterator it;
	for (it = plantasInteriores.begin(); it != plantasInteriores.end(); it++) {

		Interior *aux = dynamic_cast<Interior*>(*it);
		if (aux) {
			aux->mostrarHumedad();
		} else {
			cout << "la instancia no es una planta de interior" << endl;
		}
	}
}
