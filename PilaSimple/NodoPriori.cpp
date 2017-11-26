#include "stdafx.h"
#include <iostream>
#include "NodoPriori.h"
using namespace std;

NodoPriori::NodoPriori() {
	this->info = 0;
	this->sig = NULL;
	this->prioridad = 0;
}
NodoPriori::NodoPriori(int pinfo, int pprioridad) {
	this->info = pinfo;
	this->prioridad = pprioridad;
	this->sig = NULL;
}

void NodoPriori::setPrioridad(int x){
	this->prioridad = x;
}

int NodoPriori::getPrioridad() {
	return prioridad;
}

void NodoPriori::setInfo(int x) {
	this->info = x;
}

int NodoPriori::getInfo(void) {
	return info;
}

void NodoPriori::setSig(NodoPriori*x) {
	this->sig = x;
}

NodoPriori* NodoPriori::getSig(void) {
	return sig;
}

NodoPriori::~NodoPriori() {
	this->info = 0;
	this->prioridad = 0;
	if (getSig() != NULL) {
		delete sig;
	}
}