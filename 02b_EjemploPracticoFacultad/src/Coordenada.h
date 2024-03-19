/*
 * Coordenada.h
 *
 *  Created on: 17 mar 2024
 *      Author: gabriel
 */

#ifndef COORDENADA_H_
#define COORDENADA_H_

class Coordenada {
private:
	int x;
	int y;
public:
	Coordenada();
	Coordenada(int x, int y);
	Coordenada(Coordenada &c); //esta firma es la usual cuando paso un parámetro
	//por referencia
	//& significa que estoy pasando una dirección de memoria que tiene
	//almacenada un objeto de tipo  Coordenada


	virtual ~Coordenada();
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();

	void mostrar();
};

#endif /* COORDENADA_H_ */
