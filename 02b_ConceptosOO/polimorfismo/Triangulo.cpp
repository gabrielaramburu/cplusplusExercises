/*
 * Triangulo.cpp
 *
 *  Created on: 21 mar 2024
 *      Author: gabriel
 */

#include "Triangulo.h"

#include <iostream>
#include <string>

using namespace std;

Triangulo::Triangulo() {
	// TODO Auto-generated constructor stub

}

Triangulo::~Triangulo() {
	// TODO Auto-generated destructor stub
}


float Triangulo::calcularArea() {
	float area = (this->base * this->altura) / 2;
	cout << " Area del Triángulo: " << to_string(area);
	return area;
}
