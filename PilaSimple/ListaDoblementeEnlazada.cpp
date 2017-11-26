#include "stdafx.h"
#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include "NodoDobleSent.h"
using namespace std;

ListaDoblementeEnlazada::ListaDoblementeEnlazada() {
	this->cabeza = NULL;
}
NodoDobleSent* ListaDoblementeEnlazada::getCabeza(void) {
	return cabeza;
}
void ListaDoblementeEnlazada::setCabeza(NodoDobleSent *NodoDobleSentPtr) {
	this->cabeza = NodoDobleSentPtr;
}
void ListaDoblementeEnlazada::addNodo(int x) {
	NodoDobleSent * aux;
	aux = new NodoDobleSent(x);
	if (getCabeza() == NULL) {
		setCabeza(aux);
	}
	else
	{
		aux->setSig(getCabeza());
		cabeza->setAnt(aux);
		setCabeza(aux);
	}
}
void ListaDoblementeEnlazada::mostrarListaDoblementeEnlazada() {
	NodoDobleSent* aux = getCabeza();
	NodoDobleSent* aux2;
	while (aux != NULL)
	{
		cout << aux->getInfo();
		cout << "-";
		if (aux->getSig() == NULL) {
			aux2 = aux;
		}
		aux = aux->getSig();
	}
	cout << "Ahora en reversa:"<<endl;
	while (aux2 != NULL)
	{
		cout << aux->getInfo();
		cout << "-";
		aux = aux->getAnt();
	}
}

void ListaDoblementeEnlazada::insetarOrdenado(int x) {
	NodoDobleSent * aux;
	aux = new NodoDobleSent(x);
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
			NodoDobleSent *ant = getCabeza();
			NodoDobleSent *act = getCabeza()->getSig();
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