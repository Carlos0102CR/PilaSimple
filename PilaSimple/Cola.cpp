#include "stdafx.h"
#include <iostream>
#include "Cola.h"
#include "Nodo.h"
using namespace std;

Cola::Cola() {
	this->frente = NULL;
	this->final = NULL;
}

int Cola::getLongitud() {
	return longitud;
}

void Cola::setLongitud(int plongitud) {
	this->longitud=plongitud;
}

Nodo * Cola::getFrente() {
	return frente;
}

void Cola::setFrente(Nodo * frente) {
	this->frente = frente;
}

Nodo * Cola::getFinal() {
	return final;
}

void Cola::setFinal(Nodo * final) {
	this->final = final;
}

void Cola::insertarElem(int pinfo) {
	Nodo * aux;
	aux = new Nodo(pinfo);
	final->setSig(aux);
	setFinal(aux);
}

Nodo * Cola::atender() {
	Nodo * aux;
	aux = getFrente();
	setFrente(aux->getSig());
	return aux;
}

Nodo * Cola::ultimoElem() {
	return getFinal();
}

bool Cola::isEmpty() {
	if (getFrente() == NULL && getFinal()==NULL) {
		return true;
	}
	return false;
}

Cola::~Cola() {
	delete frente;
}

//test