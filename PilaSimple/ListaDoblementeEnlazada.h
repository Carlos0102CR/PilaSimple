#pragma once
#ifndef LISTADOBLEMENTEENLAZADA_H
#define LISTADOBLEMENTEENLAZADA_H
#include "NodoDobleSent.h"
class ListaDoblementeEnlazada {
public:
	ListaDoblementeEnlazada(void);
	NodoDobleSent* getCabeza(void);
	void setCabeza(NodoDobleSent *x);
	void addNodo(int info);
	void mostrarListaDoblementeEnlazada(void);
	void insetarOrdenado(int);
	~ListaDoblementeEnlazada(void);
protected:
	NodoDobleSent * cabeza;
}
#endif // !LISTADOBLEMENTEENLAZADA_H