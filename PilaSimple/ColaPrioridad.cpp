#include "stdafx.h"
#include <iostream>
#include "ColaPrioridad.h"
#include "NodoPriori.h"
using namespace std;

ColaPrioridad::ColaPrioridad() {
	Cola();
}

void ColaPrioridad::insertarElem(int pinfo, int pprioridad) {
	NodoPriori * aux;
	NodoPriori * act;
	aux = new NodoPriori(pinfo,pprioridad);
	act = getFrente();
	if (act->getPrioridad<aux->getPrioridad) {
		aux->setSig(act);
		setFrente(aux);
	}else {
		while(act->getSig()->getPrioridad()>aux->getPrioridad()|| act->getSig()->getPrioridad()==aux->getPrioridad()){
			act = act->getSig();
		}
		if (act->getSig() != NULL) {
			aux->setSig(act->getSig);
		}
		act->setSig(aux);
	}
}
int ColaPrioridad::getLongitud() {
	return longitud;
}

void ColaPrioridad::setLongitud(int plongitud) {
	this->longitud = plongitud;
}

NodoPriori * ColaPrioridad::getFrente() {
	return frente;
}

void ColaPrioridad::setFrente(NodoPriori * frente) {
	this->frente = frente;
}

NodoPriori * ColaPrioridad::getFinal() {
	return final;
}

void ColaPrioridad::setFinal(NodoPriori * final) {
	this->final = final;
}

NodoPriori * ColaPrioridad::atender() {
	NodoPriori * aux;
	aux = getFrente();
	setFrente(aux->getSig());
	return aux;
}

NodoPriori * ColaPrioridad::ultimoElem() {
	return getFinal();
}

bool ColaPrioridad::isEmpty() {
	if (getFrente() == NULL && getFinal() == NULL) {
		return true;
	}
	return false;
}