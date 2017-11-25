#include "stdafx.h"
#include <iostream>
#include "ColaCicular.h"
#include "Cola.h"
#include "Nodo.h"
using namespace std;

ColaCircular::ColaCircular() {
	Cola();
}

Nodo * ColaCircular::siguiente() {
	Nodo * aux;
	aux = getFrente();
	setFrente(aux->getSig());
	aux->setSig(getFrente());
	setFinal(aux);
	return aux;
}

Nodo * ColaCircular::anterior() {
	Nodo* aux;
	Nodo* act;
	act = getFrente();
	aux = getFinal();
	while (act->getSig() != getFinal())
	{
		act = act->getSig();
	}
	setFinal(act);
	aux->setSig(getFrente());
	setFrente(aux);
	return aux;
}

void ColaCircular::insertarElem(int pinfo) {
	Nodo * aux;
	aux = new Nodo(pinfo);
	if (getFrente() != NULL || getFinal()!=NULL) {
		aux->setSig(getFrente());
		final->setSig(aux);
	}
	else if(getFrente() == NULL && getFinal() == NULL)
	{
		setFrente(aux);
	}
	setFinal(aux);
}