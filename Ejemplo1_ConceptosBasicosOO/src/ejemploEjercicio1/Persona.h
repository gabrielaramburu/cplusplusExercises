/*
 * Persona.h
 *
 *  Created on: 13 mar 2024
 *      Author: gabriel
 */

#ifndef EJEMPLOEJERCICIO1_PERSONA_H_
#define EJEMPLOEJERCICIO1_PERSONA_H_

#include <string>
using namespace std;

class Persona {
private:
	string nombre;
	string apellido;
	int cedula;

public:
	static int VALOR_COMUN;

	Persona();
	Persona(string nombre, string apellido, int cedula);
	virtual ~Persona();

	string getApellido() const;
	void setApellido(string apellido);
	int getCedula();
	void setCedula(int cedula);
	string getNombre() const;
	void setNombre(string nombre);


	void saludar();
	string darInformacionPersonal();
};

#endif /* EJEMPLOEJERCICIO1_PERSONA_H_ */
