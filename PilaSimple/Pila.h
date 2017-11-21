#pragma once
#ifndef PILA_H
#define PILA_H
#include "Nodo.h"
class Pila {
public:
	Pila(void);
	int getLongitud(void);
	void setLongitud(int plongitud);
	Nodo * getTope(void);
	void setTope(Nodo * ptope);
	void pushElem(int pinfo);
	Nodo * popElem(void);
	bool isEmpty(void);
	void mostrarPila(void);
	~Pila(void);
	
private:
	int longitud;
	Nodo * tope;
};
#endif