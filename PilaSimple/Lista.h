#pragma once
#include "Nodo.h"
#ifndef LISTA_H
#define LISTA_H
class Lista {
public:
	Lista(void);
	Nodo* getCabeza(void);
	void setCabeza(Nodo *x);
	void addNodo(int info);
	void mostrarLista(void);
	void insetarOrdenado(int);

protected:
	Nodo *cabeza;
};
#endif
