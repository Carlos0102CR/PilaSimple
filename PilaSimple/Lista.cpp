#include "stdafx.h"
#include <iostream>
#include "Lista.h"
#include "Nodo.h"
using namespace std;
Lista::Lista() {
	this->cabeza = NULL;
}
Nodo* Lista::getCabeza(void) {
	return cabeza;
}
void Lista::setCabeza(Nodo *nodoPtr) {
	this->cabeza = nodoPtr;
}
void Lista::addNodo(int x) {
	Nodo * aux;
	aux = new Nodo(x);
	if (getCabeza() == NULL) {
		setCabeza(aux);
	}
	else
	{
		aux->setSig(getCabeza());
		setCabeza(aux);
	}
}
void Lista::mostrarLista() {
	Nodo* aux = getCabeza();
	while (aux != NULL)
	{
		cout << aux->getInfo();
		cout << "-";
		aux = aux->getSig();
	}
}

void Lista::insetarOrdenado(int x) {
	Nodo * aux;
	aux = new Nodo(x);
	if (getCabeza() == NULL)
	{
		setCabeza(aux);
	}
	else
	{
		if (getCabeza()->getInfo() > aux->getInfo())
		{
			aux->setSig(getCabeza());
			setCabeza(aux);
		}
		else
		{
			Nodo *ant = getCabeza();
			Nodo *act = getCabeza()->getSig();
			while (act != NULL && !(act->getInfo() > aux->getInfo()))
			{
				ant = ant->getSig();
				act = act->getSig();
			}
			aux->setSig(act);
			ant->setSig(aux);
		}
	}

}