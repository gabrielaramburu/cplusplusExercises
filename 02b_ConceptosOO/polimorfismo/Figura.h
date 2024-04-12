/*
 * Figura.h
 *
 *  Created on: 21 mar 2024
 *      Author: gabriel
 */

#ifndef FIGURA_H_
#define FIGURA_H_
#include <string>

using namespace std;

class Figura {
protected:
	float base;
	float altura;

public:
	Figura();
	virtual ~Figura();
	virtual float calcularArea()=0; //este método es abstracto
	void setAltura(int altura);
	void setBase(int base);
	virtual string toString()=0;
};

#endif /* FIGURA_H_ */
