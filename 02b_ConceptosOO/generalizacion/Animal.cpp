/*
 * Animal.cpp
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#include "Animal.h"

#include <iostream>


using namespace std;

Animal::Animal() {
	// TODO Auto-generated constructor stub

}

Animal::~Animal() {
	// TODO Auto-generated destructor stub
}

void Animal::mostrarTamanio(){
	cout << "Tamaño animal " << this->tamanio << endl;
}

//este método está sobrecargado, ya que si bien tiene el mismo nombre y tipo de retorno
//recibe diferentes parámetros
void Animal::mostrarTamanio(bool completo) {

	cout << "Por el momento no tenemos más información para mostrar." << endl;
	cout << "Tamaño animal " << this->tamanio << endl;
}
