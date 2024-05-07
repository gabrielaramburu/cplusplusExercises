/*
 * ClienteA.h
 *
 *  Created on: 7 may 2024
 *      Author: gabriel
 */

#ifndef CLIENTEA_H_
#define CLIENTEA_H_

#include "InterfaceA.h"


class ClienteA {
private:
	//Cliente depende de la interface A
	InterfaceA *servicio;

public:
	ClienteA();
	ClienteA(InterfaceA *i);
	virtual ~ClienteA();
	void hacerAlgo();
};

#endif /* CLIENTEA_H_ */
