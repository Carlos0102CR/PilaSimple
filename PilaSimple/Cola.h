#pragma once
#ifndef COLA_H
#define COLA_H
#include "Nodo.h"
class Cola {
public:
	Cola(void);
	int getLongitud(void);
	void setLongitud(int plongitud);
	Nodo * getFrente(void);
	void setFrente(Nodo * pfrente);
	Nodo * getFinal(void);
	void setFinal(Nodo * pfinal);
	void insertarElem(int pinfo);
	Nodo * atender();
	Nodo * ultimoElem();
	void eliminarElem(void);
	bool isEmpty(void);//carlos
	~Cola(void);

protected:
	int longitud;
	Nodo * frente;
	Nodo * final;
};
#endif