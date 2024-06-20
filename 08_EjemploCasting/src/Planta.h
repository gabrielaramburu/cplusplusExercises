/*
 * Planta.h
 *
 *  Created on: 19 jun 2024
 *      Author: gabriel
 */

#ifndef PLANTA_H_
#define PLANTA_H_
#include <string>
#include <iostream>

using namespace std;

class Planta {
protected:
    string nombre;
    double altura;
    string tipo;

public:
    virtual void mostrarInfo()=0;

};

#endif
