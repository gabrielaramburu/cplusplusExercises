/*
 * Animal.h
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal {
private:

public:
	Animal();
	virtual ~Animal();
	void virtual mostrarTamanio();
	void mostrarTamanio(bool completo);
protected:
	//atributos solo visibles en la jerarquía
	int tamanio;

};

#endif /* ANIMAL_H_ */
