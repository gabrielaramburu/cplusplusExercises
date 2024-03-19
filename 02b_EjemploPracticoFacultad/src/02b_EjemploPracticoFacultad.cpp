//============================================================================
// Name        : 02b_EjemploPracticoFacultad.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Segmento.h"
using namespace std;

void ejemplo1();
void ejemplo2();
void ejemplo3();
void ejemplo4();
void ejemplo5();
void ejercicio();

int main() {
	//ejemplo1();
//	ejemplo2();
//	ejemplo3();
	ejemplo4();
	ejemplo5();
	return 0;
}

void ejemplo1() {
	cout << endl << " *** 1 - Creando instancias de objetos dinámicos y estáticos y haciendo copia plana "
			<< endl;
	Coordenada c1(10, 40);
	Coordenada c2(5, 7);

	Coordenada *c3 = new Coordenada(1, 5);
	Coordenada *c4 = new Coordenada(3, 99);

	Coordenada c5 = c2; //c5 es una copia de c2
	Coordenada *c6 = new Coordenada(c2);


	cout << endl << " Coordenada c5: ";
	c5.mostrar();
	cout << endl << " Coordenada c2: ";
	c2.mostrar();
	cout << endl << " Coordenada c6: ";
	c6->mostrar();

	c2.setX(99);

	cout << endl << " Coordenada c5: ";
	c5.mostrar();
	cout << endl << " Coordenada c2: ";
	c2.mostrar();
	cout << endl << " Coordenada c6: ";
	c6->mostrar();

	cout << endl << "Borrado de heap" << endl;
	delete c3; //tengo que liberar la memoria manualmente
	delete c4;
	cout << "Fin Borrado de heap" << endl;

}

void ejemplo2() {
	cout << endl << "*** 2 - Creando segmentos utilizando objetos estaticos, pasaje por valor"
			<< endl;
	Coordenada c1(10, 40);
	Coordenada c2(5, 7);

	Segmento s1(c1, c2, 0);

	s1.mostrar();

	//obervar que se crearon 4 objetos en total ya que cuando paso
	//c1 y c2 al constructor de Segmento se crean copian en el stack
}

void ejemplo3() {
	cout << endl << "*** 3 - Creando segmentos utilizando objetos estaticos, pasaje por referencia"
			<< endl;
	Coordenada c1(10, 40);
	Coordenada c2(5, 7);

	Segmento s1(c1, c2);

	s1.mostrar();

}


void ejemplo4() {
	cout << endl << "*** 4 - Creando segmentos utilizando objetos dinámicos, pasaje por valor"
			<< endl;
	Coordenada *c1 = new Coordenada(10, 40);
	Coordenada *c2 = new Coordenada(5, 7);

	//Segmento s1(c1, c2, 0); esto no compila ya que c1 y c2 son punteros y
	//el constructor solo acepta Coordenadas, no punteros a coordenadas
	Segmento *s2 = new Segmento (*c1, *c2,0);


	s2->mostrar();

	cout << endl << "Borrado de heap" << endl;
	delete c1;
	delete c2;
	delete s2;
	cout << "Fin Borrado de heap" << endl;
}

void ejemplo5() {
	cout << endl << "*** 5 -Creando segmentos utilizando objetos dinámicos, pasaje por referencia"
			<< endl;
	Coordenada *c1 = new Coordenada(10, 40);
	Coordenada *c2 = new Coordenada(5, 7);

	//Segmento s1(c1, c2); esto no compila ya que c1 y c2 son punteros y
	//el constructor solo acepta Coordenadas, no punteros a coordenadas

	Segmento *s2 = new Segmento (*c1, *c2);

	s2->mostrar();

	cout << endl << "Borrado de heap" << endl;
	delete c1;
	delete c2;
	delete s2;
	cout << "Fin Borrado de heap" << endl;
}

void ejemplo6() {
	cout << endl << "*** 6 -Creando segmentos utilizando objetos dinámicos, ejercicio para entender que pasa"
			<< endl;

	/* ¿Cuantos objetos Coordenadas se crean y se destruyen y porque ?*/

	Coordenada *c1 = new Coordenada(10, 40);
	Coordenada *c2 = new Coordenada(5, 7);

	Segmento s1(*c1, *c2);

	s1.mostrar();

	cout << endl << "Borrado de heap" << endl;
	delete c1;
	delete c2;
	cout << "Fin Borrado de heap" << endl;
}

