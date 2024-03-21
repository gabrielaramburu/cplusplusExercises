/*
 * Cuenta.h
 *
 *  Created on: 20 mar 2024
 *      Author: gabriel
 */

#ifndef ASOCIACIONES_CUENTA_H_
#define ASOCIACIONES_CUENTA_H_
#include <string>
using namespace std;

class Cuenta {
private:
	int id;
	string fechaApertura;
	int tipo;
public:
	Cuenta();
	virtual ~Cuenta();
};

#endif /* ASOCIACIONES_CUENTA_H_ */
