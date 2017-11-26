#pragma once
#ifndef COLAPRIORIDAD_H
#define COLAPRIORIDAD_H
#include "NodoPriori.h"
#include "Cola.h"
class ColaPrioridad{
public:
	ColaPrioridad();
	~ColaPrioridad();
	void insertarElem(int pinfo, int pprioridad);
	int getLongitud(void);
	void setLongitud(int plongitud);
	NodoPriori * getFrente(void);
	void setFrente(NodoPriori * pfrente);
	NodoPriori * getFinal(void);
	void setFinal(NodoPriori * pfinal);
	void insertarElem(int pinfo);
	NodoPriori * atender();
	NodoPriori * ultimoElem();
	void eliminarElem(void);
	bool isEmpty(void);
private:
	int longitud;
	NodoPriori * frente;
	NodoPriori * final;
};
#endif//COLAPRIORIDAD_H