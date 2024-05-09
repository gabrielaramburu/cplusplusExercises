/*
 * SimuladorTransporteCarga.h
 *
 *  Created on: 9 may 2024
 *      Author: gabriel
 */

#ifndef SIMULADORTRANSPORTECARGA_H_
#define SIMULADORTRANSPORTECARGA_H_
#include "ITransporte.h";

class SimuladorTransporteCarga {
private:
	ITransporte  *itrans;

public:
	SimuladorTransporteCarga(ITransporte* iTrans);
	virtual ~SimuladorTransporteCarga();

	void simularTransporte();
};

#endif /* SIMULADORTRANSPORTECARGA_H_ */
