#pragma once
#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H
#include "Nodo.h"
#include "Cola.h"
class ColaCircular:public Cola {
public:
	ColaCircular();
	Nodo * siguiente();
	Nodo * anterior();
	void insertarElem(int pinfo);
};
#endif