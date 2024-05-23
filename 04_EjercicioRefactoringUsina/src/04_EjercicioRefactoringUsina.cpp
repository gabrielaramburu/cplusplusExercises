//============================================================================
// Name        : 04_EjercicioRefactoringUsina.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>

#include "Turbina.h"
#include "TurbinaEspecial.h"

using namespace std;
/* Ejercicio:
 *
 * Parte A:
 * Tomando como referencias los principios que guían el buen diseño orientado
 * a objetos y con la ayuda del diagrama de comunicación realizado en clses
 * refactorice este codigo para mejorar la calidad del mismo.
 *
 * Argumente cada decisión de diseño tomada.
 *
 * Parte B:
 * Realice los cambios necesarios para que el programa sea capas de trabajar
 * con varias usinas. El usuario deberá de ingresar la Usina a la cual
 * se desea calcular la potencia.
 *
 * */
int main() {
	list<Turbina*> turbinas;

	Turbina *t1 = new Turbina(true, 100);
	Turbina *t2 = new Turbina(true, 150);
	Turbina *t3 = new Turbina(false, 200);
	Turbina *t4 = new TurbinaEspecial(true, 200, 10);

	turbinas.push_back(t1);
	turbinas.push_back(t2);
	turbinas.push_back(t3);
	turbinas.push_back(t4);

	double potenciaTotal = 0;

	list<Turbina*>::iterator it;
	for (it = turbinas.begin(); it != turbinas.end(); ++it) {
		if (((Turbina*)*it)->activa) {

			TurbinaEspecial *turEspecial;

			turEspecial = dynamic_cast<TurbinaEspecial*>(*it);
			//si es una turbina especial
			if (turEspecial != nullptr) {
				int coef = ((TurbinaEspecial*)*it)->getCoeficiente();
				double pot = ((TurbinaEspecial*)*it)->getPotencia();
				double potencia = pot * coef;
				cout << "Potencia turbina especial: " << to_string(potencia) << endl;
				potenciaTotal += potencia;
			} else {

				double pot = ((Turbina*)*it)->getPotencia();
				potenciaTotal += pot;
				cout << "Potencia turbina comun: " << to_string(pot) << endl;
			}

		} else {
			cout << "la turbina no esta activa" << endl;
		}


	}
	cout << "PotenciaTotal: " << to_string(potenciaTotal);
}
