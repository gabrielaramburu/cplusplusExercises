/*
 * Mascota.h
 *
 *  Created on: 19 mar 2024
 *      Author: gabriel
 */

#ifndef MASCOTA_H_
#define MASCOTA_H_
#include <string>

using namespace std;

class Mascota {
public:
	string nombre;
	Mascota();
	Mascota(string nombre);
	virtual ~Mascota();
};

#endif /* MASCOTA_H_ */
