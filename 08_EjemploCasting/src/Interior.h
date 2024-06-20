/*
 * Interior.h
 *
 *  Created on: 19 jun 2024
 *      Author: gabriel
 */

#ifndef INTERIOR_H_
#define INTERIOR_H_
#include "Planta.h"

class Interior: public Planta {
private:
    string luzNecesaria;
    string humedad;

public:
    Interior(const string& nombre, double altura,
    		const string& luzNecesaria, const string& humedad);

    virtual void mostrarInfo();

    void mostrarHumedad();

    Interior();
    virtual ~Interior();
};

#endif /* INTERIOR_CPP_ */
