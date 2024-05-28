
#include <iostream>
#include <list>
#include <algorithm>

#include "Vehiculo.h"


using namespace std;

/* Ejercicio:
 *
 * Parte A:
 * Tomando como referencias los principios que guían el buen diseño orientado
 * a objetos y con la ayuda del diagrama de comunicación realizado en clases
 * refactorice este codigo para mejorar la calidad del mismo.
 *
 * Argumente cada decisión de diseño tomada.
 *
 *
 * */
int main() {
	list<Vehiculo*> vehiculos;

	Vehiculo *v1 = new Vehiculo(1,"baa 1111");
	Vehiculo *v2 = new Vehiculo(2,"baa 2222");
	Vehiculo *v3 = new Vehiculo(3,"baa 3333");

	Vehiculo *v4 = new Vehiculo(1,"baa 1111");

	vehiculos.push_back(v1);
	vehiculos.push_back(v2);
	vehiculos.push_back(v3);


	if (*v1 == *v4) {
		//notese que v1 == v2 compara los punteros
		//tengo que desreferenciar para poder comparar los objetos
		cout << "Iguales " << endl;
	}

	if (*v1 == (*(new Vehiculo(1,"")))) {
		//otro ejemplo donde comparo con un objeto auxiliar creado solo
		//para ser utilizado como criterio de busqueda
		//new .... crea un puntero a un objeto, por eso tengo que desreferenciar
		cout << "Iguales2 " << endl;
	}

	if (*v1 == (Vehiculo(1,""))) {
		//otro ejemplo donde comparo con un objeto auxiliar creado solo
		//para ser utilizado como criterio de busqueda
		//acá no necesito desreferenciar ya que creo un objeto (no un puntero al objeto)
		cout << "Iguales3 " << endl;
	}

	int matriculaABuscar = 1;
	list<Vehiculo*>::iterator it;
	it = find_if (vehiculos.begin(), vehiculos.end(),
			[matriculaABuscar](Vehiculo* const &v){ return v->nro == matriculaABuscar;});

	//para cada elemento de la lista, se le aplica un predicado
	//en este caso el predicado es { return v->nro == matriculaABuscar;}
	//en v tengo el puntero al elemnto actual
	//[]se utiliza para pasarle parámetros al predicado


	if (it != vehiculos.end()) {
		cout << "encontre, matricula:" << ((Vehiculo*)*it)->matricula <<endl;
	} else {
		cout << "no encontre" << endl;
	}

}


