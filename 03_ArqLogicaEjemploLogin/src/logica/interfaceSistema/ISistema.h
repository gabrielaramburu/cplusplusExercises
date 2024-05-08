/*
 * ILogin.h
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#ifndef LOGICA_ILOGIN_H_
#define LOGICA_ILOGIN_H_
#include <iostream>
using namespace std;

//Interface del Sistema
//Como este ejemplo es muy sencillo, solo tengo una interface del sistema
class ISistema {

public:
	virtual string ingresar(string nick, string pass)=0;
};



#endif /* LOGICA_ILOGIN_H_ */
