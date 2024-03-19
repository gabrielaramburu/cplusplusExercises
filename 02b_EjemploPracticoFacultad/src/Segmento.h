/*
 * Segmento.h
 *
 *  Created on: 17 mar 2024
 *      Author: gabriel
 */

#ifndef SEGMENTO_H_
#define SEGMENTO_H_
#include "Coordenada.h";

class Segmento {
private:
	//tipos definidos por el usuario: typedef
	Coordenada ext1;
	Coordenada ext2;

public:
	Segmento();
	Segmento(Coordenada c1, Coordenada c2, int x);
	Segmento(Coordenada &c1, Coordenada &c2); //pasaje por referencia
	virtual ~Segmento();
	void mostrar();
};

#endif /* SEGMENTO_H_ */
