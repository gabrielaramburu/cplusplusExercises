#include <string>
#include <iostream>
#include "Automovil.h"

using namespace std;

int main() {
	Automovil *a1 = new Automovil(1,"Ford","Fiesta",2000);
	Automovil *a2 = new Automovil(2,"Peugeot","508",2010);

	Automovil a3; //observar como estoy objetos se inicializan con basura
	Automovil a4;


	a1->mostrarInformacion();

	a3.mostrarInformacion(); //muestra basura

	cout << "Marca " + a1->getMarca() << endl;

	a3.setId(100);
	a3.setMarca("Renault");
	a3.setModelo("Clio");
	a3.setAnioFabricacion(2010);

	a3.mostrarInformacion();


	cout << "Velocidad máxima de todos los objetos " << Automovil::VELOCIDAD_MAX << endl;
	//observese que estas instrucciones pueden ser engañosas
	//ya que estamos accediendo a una propiedad de la clase a travéz de una instancia
	cout << a1->VELOCIDAD_MAX << endl;
	cout << a2->VELOCIDAD_MAX << endl;
	cout << a3.VELOCIDAD_MAX << endl;

	delete a1;
	delete a2;
	return 0;
}
