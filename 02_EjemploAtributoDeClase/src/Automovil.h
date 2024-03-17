/*
 * Automovil.h
 *
 *  Created on: 17 mar 2024
 *      Author: gabriel
 */

#ifndef EJERCICIO1_AUTOMOVIL_H_
#define EJERCICIO1_AUTOMOVIL_H_
#include <string>

using namespace std;

class Automovil {

private:
	int id;
	string marca;

	//atributo de clase privado
	static int contadorPrivado;


public:
	//atributo de clase publico
	static int contador;

	Automovil();
	Automovil(int id, string marca);
	virtual ~Automovil();

	void setId(int id);
	int getId();


	void setMarca(string marca);
	string getMarca();


	void mostrarInformacion();

	//un método también puede ser estático
	static int obtenerContadorPrivado();

};


#endif /* EJERCICIO1_AUTOMOVIL_H_ */
