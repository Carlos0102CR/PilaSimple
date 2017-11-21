#include "stdafx.h"
#include <iostream>
#include "Pila.h"
#include "Nodo.h" 
using namespace std;
Pila::Pila() {
	this->tope = NULL;
}

int Pila::getLongitud(void) {
	return longitud;
}

void Pila::setLongitud(int plongitud) {
	this->longitud = plongitud;
}

Nodo * Pila::getTope(void) {
	return tope;
}

void Pila::setTope(Nodo * ptope) {
	this->tope = ptope;
}

void Pila::pushElem(int pinfo) {//consultar con el profe manera mas efectiva
	Nodo * aux;
	aux = new Nodo(pinfo);
	if (getTope() != NULL) {//==NULL que haga setTope(aux), pero tendria que repetir la linea 2 veces
		aux->setSig(tope);
	}
	setTope(aux);
	setLongitud(longitud++);//consultar si es mejor usar getLongitud()
}

Nodo * Pila::popElem() {
	Nodo * aux;
	aux = getTope();
	setTope(aux->getSig());
	return aux;
}

bool Pila::isEmpty() {
	if (getTope() == NULL) {
		return true;
	}
	return false;
}

void Pila::mostrarPila() {//consultar utilidad
	Nodo* aux = getTope();
	for(int i=0;i<getLongitud();i++){
		cout << aux->getInfo() << endl;
		aux = aux->getSig();
	}
}

 Pila::~Pila(){
	delete tope;
	longitud = 0;
}