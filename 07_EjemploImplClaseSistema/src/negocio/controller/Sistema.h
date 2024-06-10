/*
 * Sistema.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_CONTROLLER_SISTEMA_H_
#define NEGOCIO_CONTROLLER_SISTEMA_H_
#include <set>
#include "../dominio/Usuario.h"
#include "../dominio/Estudiante.h"
#include "../dominio/Profesor.h"
#include "../dominio/Idioma.h"

using namespace std;

//Esto es un singleton (ver patron de diseño)

class Sistema {
private:
	Sistema(); //declaro el constructor como privado
	static Sistema* miSistema;	//puntero a la unica intancia de Sistema

public:
	//Esta es una clase utilitaria por lo que no tiene sentido encapsular su estado
	//(no utilizo getters y setters)

	set<Usuario*> usuarios;
	set<Idioma*> idiomas;

	static Sistema* getInstance(); //metodo de clase que devuele siempre la misma instancia
	void inicializarDatos();
	virtual ~Sistema();
};

#endif /* NEGOCIO_CONTROLLER_SISTEMA_H_ */
