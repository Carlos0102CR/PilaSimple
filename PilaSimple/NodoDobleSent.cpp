#include "stdafx.h"
#include "NodoDobleSent.h"
using namespace std;

NodoDobleSent::NodoDobleSent(void) {
	this->ant = NULL;
	this->info = 0;
	this->sig = NULL;
}

NodoDobleSent::NodoDobleSent(int x) {
	this->info = x;
	this->sig = NULL;
	this->ant = NULL;
}
void NodoDobleSent::setAnt(NodoDobleSent *x) {
	this->ant = x;
}

NodoDobleSent* NodoDobleSent::getAnt(void) {
	return ant;
}
void NodoDobleSent::setInfo(int x) {
	this->info = x;
}

int NodoDobleSent::getInfo(void) {
	return info;
}

void NodoDobleSent::setSig(NodoDobleSent *x) {
	this->sig = x;
}

NodoDobleSent* NodoDobleSent::getSig(void) {
	return sig;
}

NodoDobleSent::~NodoDobleSent() {
	this->info = 0;
	if (getSig() != NULL) {
		delete sig;
	}
}