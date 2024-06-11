#include <iostream>
#include "../interfaces/IDictionary.h"
#include "UsuarioKey.h"
#include "Usuario.h"
#include "../collections/OrderedDictionary.h"
#include "../collections/List.h"
#include <map>
#include <iterator>
#include "Idioma.h"


using namespace std;

void ejemploDiccionarioICollections();
void ejemploListICollections();
void ejemploMap();

int main() {

	ejemploDiccionarioICollections();
	ejemploListICollections();

	ejemploMap();
	return 0;
}
void ejemploListICollections() {
	cout << endl;
	cout << "### Ejemplo IList \n";

	ICollection* lista = new List();
	lista->add(new Usuario("nick1", "nom1", "desc1"));
	lista->add(new Usuario("nick2", "nom2", "desc2"));

	for (IIterator *it = lista->getIterator(); it->hasCurrent(); it->next()) {
		cout << "Nombre " << dynamic_cast<Usuario*>(it->getCurrent())->getNombre();
		cout << endl;
	}
}

void ejemploDiccionarioICollections() {
	cout << "Ejecutando IDictionary \n";
	IDictionary* usuarios = new OrderedDictionary();
	UsuarioKey * usrKey = new UsuarioKey("pepeNick");

	Usuario* usr = new Usuario("pepeNick", "pepe", "hola123");

	usuarios->add(usrKey,usr);

	usuarios->add(new UsuarioKey("miNick"), new Usuario("miNick", "miNombre", "miPass"));


	cout << "Recorro elementos del diccionario " << endl;
	for(IIterator *it = usuarios->getIterator(); it->hasCurrent(); it->next()) {
		Usuario *usr2 = dynamic_cast<Usuario*>(it->getCurrent());
		cout << "Usuario: " << usr2->getNombre() << endl;
	}

	cout << "Busco un elemento del diccionario " << endl;
	ICollectible* usr3 = usuarios->find(new UsuarioKey("pepeNick"));
	if (usr3 != nullptr) {
		cout << "Encontre usuario " << dynamic_cast<Usuario*>(usr3)->getNombre();
	}
}


void ejemploMap() {
	cout << endl;
	cout << "### Ejemplo map \n";
	std::map<std::string, Idioma*> idiomas;
	idiomas.insert(pair<string, Idioma*>("Ing",new Idioma("Ingles")));
	idiomas.insert(pair<string, Idioma*>("Ale",new Idioma("Aleman")));
	idiomas.insert(pair<string, Idioma*>("Ita",new Idioma("Italiano")));

	map<string, Idioma*>::iterator it;
	for (it = idiomas.begin(); it != idiomas.end(); ++it) {
		//muestro la clave
		cout << "Clave: " << it->first
				<< " Valor : " << it->second->getNomIdioma() << endl;
	}

	cout << "*** Accedo al elemento por su clave" << endl;
	Idioma* idioma1 = idiomas["Ita"];

	cout << "Idioma recuperado " << idioma1->getNomIdioma() << endl;

	cout << "*** Accedo al elemento utilizando find" << endl;
	map<string, Idioma*>::iterator it2 = idiomas.find("Ale");
	if (it2 != idiomas.end()) {
		cout << "Idioma recuperado con find " << it2->second->getNomIdioma() << endl;
	}
}

