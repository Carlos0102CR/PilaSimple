#include "stdafx.h"
#include "Nodo.h"
using namespace std;

Nodo::Nodo(void) {
	this->info = 0;
	this->sig = NULL;
}

Nodo::Nodo(int x) {
	this->info = x;
	this->sig = NULL;
}

void Nodo::setInfo(int x) {
	this->info = x;
}

int Nodo::getInfo(void) {
	return info;
}

void Nodo::setSig(Nodo *x) {
	this->sig = x;
}

Nodo* Nodo::getSig(void) {
	return sig;
}

Nodo::~Nodo() {
	info = 0;
	if (getSig() != NULL) {
		delete sig;
	}
}