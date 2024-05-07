

#ifndef INTERFACEA_H_
#define INTERFACEA_H_

class InterfaceA {
	//en C++ la manera de crear una interface es utilizando clases abstractas
public:
	virtual void operacion1()=0;		//la clase es abstracta ya que sus métodos son abstractos
	virtual void operacion2()=0;
};

#endif
