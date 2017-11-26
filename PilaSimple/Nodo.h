#ifndef NODO_H
#define NODO_H
class Nodo {
public:
	Nodo(void);
	Nodo(int x);
	void setInfo(int x);
	int getInfo(void);
	void setSig(Nodo * x);
	Nodo* getSig(void);
	~Nodo(void);
protected:
	int info;
	Nodo * sig;
};
#endif