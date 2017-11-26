#pragma once
#ifndef NODODOBLESENT_H
#define NODODOBLESENT_H
#include "Nodo.h"
class NodoDobleSent{
public:
	NodoDobleSent(void);
	NodoDobleSent(int x);
	void setAnt(NodoDobleSent * x);
	NodoDobleSent* getAnt(void);
	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoDobleSent * x);
	NodoDobleSent* getSig(void);
	~NodoDobleSent(void);
private:
	NodoDobleSent * ant;
	int info;
	NodoDobleSent * sig;
};
#endif // !NODODOBLESENT
