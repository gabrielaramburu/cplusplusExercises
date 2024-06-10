/*
 * RealizarEjercicio.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "RealizarEjercicio.h"
#include "../negocio/controller/IEjercicioController.h"

RealizarEjercicio::RealizarEjercicio() {
	//TODO pendiente de usar una fabrica
	this->iejercicio = new IEjercicioController();

}

RealizarEjercicio::~RealizarEjercicio() {
	// TODO Auto-generated destructor stub
}

void RealizarEjercicio::realizarEjercicio() {

	cout << "*** Realizar Ejercicio *** " << endl;

	//a modo desmostrativo solo muestro los usuarios del sistema
	this->iejercicio->realizarEjercicio("");
}

