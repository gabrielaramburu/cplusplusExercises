/*
 * Rectangulo.cpp
 *
 *  Created on: 21 mar 2024
 *      Author: gabriel
 */

#include "Rectangulo.h"

#include <iostream>

using namespace std;

Rectangulo::Rectangulo() {
	// TODO Auto-generated constructor stub

}

Rectangulo::~Rectangulo() {
	// TODO Auto-generated destructor stub
}

float Rectangulo::calcularArea() {
	float area = base * altura;
	cout << " Area del Rectángulo: " << to_string(area);
	return area;
}

string Rectangulo::toString() {
	return "muestro rectángulo";
}

