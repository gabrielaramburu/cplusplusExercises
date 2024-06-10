/*
 * AltaUsuario.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef PRESENTACION_ALTAUSUARIO_H_
#define PRESENTACION_ALTAUSUARIO_H_
#include "../negocio/controller/IUsuario.h"
#include "../negocio/dto/DTOProfesor.h"
#include "../negocio/dto/DTOEstudiante.h"


class AltaUsuario {
private:
	IUsuario* iusuario;

public:
	AltaUsuario();
	virtual ~AltaUsuario();
	void altaUsuario();
	DTOEstudiante* ingresarEstudiante(string nick);
	DTOProfesor* ingresarProfesor(string nick);
	set<string> seleccionarIdiomas();
};

#endif /* PRESENTACION_ALTAUSUARIO_H_ */
