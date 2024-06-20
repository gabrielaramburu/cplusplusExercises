/*
 * Interior.h
 *
 *  Created on: 19 jun 2024
 *      Author: gabriel
 */

#include "Interior.h"

Interior::Interior(const string &nombre, double altura,
		const string &luzNecesaria, const string &humedad) {
	this->altura = altura;
	this->nombre = nombre;
	this->luzNecesaria = luzNecesaria;
	this->humedad = humedad;

}

void Interior::mostrarInfo(){
	cout <<"Interior " << nombre << "; Luz necesaria: " << luzNecesaria << ", Humedad: " << humedad << endl;
}

void Interior::mostrarHumedad() {
	cout << this->nombre << ", Humedad " << this->humedad << endl;
}

Interior::Interior() {
	// TODO Auto-generated constructor stub

}

Interior::~Interior() {
	// TODO Auto-generated destructor stub
}
