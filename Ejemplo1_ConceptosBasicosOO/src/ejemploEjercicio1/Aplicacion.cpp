#include <iostream>
#include "Persona.h"

using namespace std;

int main() {
	cout << "Ejecutando programa \n";

	//instanciando objetos de forma estática
	Persona p1 ("Jose","Lopez",1234);
	Persona p2 ("Maria","Perez",104);

	//instanciando objetos de forma dinámica
	Persona *p5 = new Persona("Juan","Garcia",4444);

	Persona p3;
	Persona p4;


	p1.saludar();
	p2.saludar();
	p5->saludar();

	cout << p1.darInformacionPersonal() << endl;
	cout << p2.darInformacionPersonal() << endl;
	cout << p5->darInformacionPersonal() << endl;

	delete p5; //libero memoria del HEAP


	return 0;
}
