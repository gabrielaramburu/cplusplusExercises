/*
 * ClaseB.h
 *
 *  Created on: 2 abr 2024
 *      Author: gabriel
 */

#ifndef CLASEB_H_
#define CLASEB_H_

class ClaseA; //El compilador compila ClaseB sin conocer la definicion de ClaseA

class ClaseB {
private:
	ClaseA *claseA;
public:
	ClaseB();
	virtual ~ClaseB();
};

#include "ClaseA.h" //Definicion de claseA
#endif /* CLASEB_H_ */
