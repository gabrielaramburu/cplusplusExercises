#include <iostream>
#include <list>
#include <string>

#include "../asociacion/Cliente.h"
#include "../asociacion/Cuenta.h"
#include "../asociacion/Transaccion.h"
#include "../generalizacion/Gato.h"
#include "../generalizacion/Molusco.h"
#include "../generalizacion/Perro.h"
#include "../polimorfismo/Rectangulo.h"
#include "../polimorfismo/Triangulo.h"

using namespace std;

void asociacion();
void generalizacion();
void intercambiabilidad();
void sobrecarga();
void redefinirOperaciones();
void poliformismo();
void mostrarTamanio(Animal &a);
void ejemploEnumaerado();
void sobreCargaOperador();

void poliformismo2();

void repasoConceptosBasicos();
void repaso_Intercambiabilidad();
void repaso_sobreescritura();
void repaso_despachoDinamico();

int main() {
	//asociacion();
	//generalizacion();
	//intercambiabilidad();
	//redefinirOperaciones();
	//sobrecarga();
	//poliformismo();
	//poliformismo2();
	//ejemploEnumaerado();

	//sobreCargaOperador();

	repasoConceptosBasicos();
}

void asociacion() {
	cout << endl << "*** Ejemplo de asociación " << endl;
	Cuenta cuenta;
	Cliente c1(1, "Pepe", cuenta);
	Transaccion t1(101, "2024-01-01", 150.0);
	Transaccion t2(102, "2024-01-02", 200.0);
	Transaccion t3(103, "2024-01-03", 201.5);

	Transaccion *t4 = new Transaccion(104, "2024-01-03", 201.5);

	c1.agregarTransaccion(t1);
	c1.agregarTransaccion(t2);
	c1.agregarTransaccion(t3);
	c1.agregarTransaccion2(t4);

	c1.listarTransacciones();
}

void generalizacion() {
	cout << endl << "*** Ejemplo de generalizacion " << endl;

	//observar que este valor se carga en un atributo heredado
	Mamifero m1(100);
	//obeservar que este método es heredado
	m1.mostrarTamanio();
}

void intercambiabilidad() {
	//Un objeto de una clase derivada es tambien un objeto de una clase base

	//por lo tanto un objeto de la clase base puede ser substituido por un objeto
	//de una clase derivada

	//un molusco es un invertebrado
	//un invertebrado es un animal

	Invertebrado *a = new Molusco();
	cout << "Un molusco es un invertebrado" << endl;

	a->mostrarTamanio();
	//aca estamos haciendo casting
	//((Molusco)a).mostrarAlgoDelMolusco();
	(dynamic_cast<Molusco*>(a))->mostrarAlgoDelMolusco();

	//lo mismo que lo anteriro pero lo cargo a un puntero
	//como paso previo
	Molusco *mol;
	mol = dynamic_cast<Molusco*>(a);
	mol->mostrarAlgoDelMolusco();
}

void sobrecarga() {
	cout << endl << "*** Ejemplo de sobrecarga " << endl;
	Mamifero a1(440);

	a1.mostrarTamanio();
	a1.mostrarTamanio(true);
}

void redefinirOperaciones() {
	cout << endl << "*** Ejemplo de redefinición de operaciones " << endl;
	Molusco mol1(500);
	mol1.mostrarTamanio();
}

void poliformismo() {
	cout << endl << "*** Ejemplo de polimorfismo " << endl;
	Animal *a1;
	Animal *a2;

	a1 = new Molusco(150);
	a2 = new Mamifero(2000);

	//el mimso codigo se va a comportar diferente
	mostrarTamanio(*a1);
	mostrarTamanio(*a2);
}

void mostrarTamanio(Animal &a) {
	//en este punto no se que método se va a ejecutar.
	//despacho dinámico, se define en tiempo de ejecución

	//gracias a que redefiní operaciones
	//y al despacho dinámico, este código es flexible y genérico
	a.mostrarTamanio();

}

void poliformismo2() {
	Figura *f = new Rectangulo();
	f->setAltura(10);
	f->setBase(5);

	f->calcularArea();
	//operacion polifórmica: la misma fue sobre escrita,
	//además decido en tiempo de ejecución quien la despacha
	//(a quien le envío el mensaje)

	Figura *f2 = new Triangulo();
	f2->setAltura(10);
	f2->setBase(5);

	cout << endl;

	f2->calcularArea(); //operacion polifórmica

	//lista de puntero a objetos
	list<Figura*> figuras;
	Figura *fig1 = new Triangulo();
	Figura *fig2 = new Rectangulo();
	figuras.push_back(fig1);
	figuras.push_back(fig2);

	cout << endl << "muestro lista de figuras " << endl;
	for (auto &ptr : figuras) {
		cout << ptr->toString() << endl;
	}

	//otra forma de recorrer lista
	list<Figura*>::iterator it;
	for (it = figuras.begin(); it != figuras.end(); ++it) {
		cout << ((*it)->toString()) << endl;
	}

}

void ejemploEnumaerado() {
	//cada valor del enumerado se inicializa a partir de 0
	enum DiasLaborales {
		lunes, martes, miercoles, jueves, viernes
	};

	DiasLaborales dia = lunes;
	cout << "Dia elegido " << dia << endl; //muestra 0

	//puedo cambiar por defecto los valores de cada enumerado
	enum MesesVerano {
		diciembre = 12, enero = 1, febrero = 2, marzo = 3
	};

	MesesVerano mes = diciembre;
	cout << "Diciembre es el mes " << mes << endl; //muestra 12

}

void sobreCargaOperador() {
	Molusco *m = new Molusco(444);
	cout << m;

	Molusco m2(3434);
	cout << &m2;
}

void repasoConceptosBasicos() {
	//repaso_Intercambiabilidad();
	//repaso_sobreescritura();
	repaso_despachoDinamico();

}

void repaso_Intercambiabilidad() {
	cout << "** Intecambiabilidad " << endl;

	Placentario *placentario;

	placentario = new Perro();
	placentario->emitirSonido();

	placentario = new Gato();
	placentario->emitirSonido();
}

void repaso_sobreescritura() {
	cout << "** Sobre escritura " << endl;

	Placentario *pla;

	pla = new Placentario();
	pla->emitirSonido(); //comportamiento de la clae base

	pla = new Perro();
	pla->emitirSonido(); //comportamiento de la clase derivada

	pla = new Gato();
	pla->emitirSonido(); //iden

}

void emitirSonido(Placentario *pla);
void repaso_despachoDinamico() {
	cout << "** Despacho dinámico " << endl;
	Placentario *pla; //el tipo estático de pla es Placentario

	pla = new Placentario();
	emitirSonido(pla);

	pla = new Perro(); //el tipo dinámico de pla es Perro
	emitirSonido(pla);

	pla = new Gato();  //el tipo dinámico de pla ed Gato
	emitirSonido(pla);

}

void emitirSonido(Placentario *pla) {
	 //acá se produce el despacho dinámico ya que se decide en tiempo de ejecución que
	//objeto recivirá el mensaje emitirSonido()

	pla->emitirSonido();

	//este código es polifórmico
}

