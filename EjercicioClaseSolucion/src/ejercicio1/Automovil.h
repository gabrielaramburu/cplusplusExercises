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
	string modelo;
	int anioFabricacion;



public:
	static const int VELOCIDAD_MAX = 60;
	//static : significa que es un miembro de la clase (no de los objetos)
	//const: significa que no lo puede cambiar (siempre va a valer 60)

	Automovil();
	Automovil(int id, string marca, string modelo, int anio);
	virtual ~Automovil();

	void setMarca(string marca);
	string getMarca();

	void setModelo(string modelo);
	string getModelo();

	void setAnioFabricacion(int anio);
	int getAnioFabricacion();

	void setId(int id);
	int getId();

	void mostrarInformacion();

};


#endif /* EJERCICIO1_AUTOMOVIL_H_ */
