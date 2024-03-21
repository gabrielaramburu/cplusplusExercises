/*
 * Transaccion.h
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#ifndef ASOCIACIONES_TRANSACCION_H_
#define ASOCIACIONES_TRANSACCION_H_
#include<string>
using namespace std;

class Transaccion {
private:
	int id;
	string fecha;
	double importe;
public:
	Transaccion();
	Transaccion(int id, string fecha, double importe);
	virtual ~Transaccion();
	void mostrar();
};

#endif /* ASOCIACIONES_TRANSACCION_H_ */
