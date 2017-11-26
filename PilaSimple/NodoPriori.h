#pragma once
#ifndef NODOPRIORI_H
#define NODOPRIORI_H
#include "NodoPriori.h"
class NodoPriori{
public:
	NodoPriori(void);
	NodoPriori(int pinfo, int pprioridad);
	void setPrioridad(int x);
	int getPrioridad(void);
	~NodoPriori(void);
	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoPriori * x);
	NodoPriori* getSig(void);
private:
	int info;
	NodoPriori * sig;
	int prioridad;
};
#endif // !NODOPRIORI_H
