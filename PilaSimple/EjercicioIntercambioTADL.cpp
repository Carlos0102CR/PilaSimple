// PilaSimple.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include "ColaCicular.h"
#include "Cola.h"
#include "Nodo.h"
#include "ColaPrioridad.h"
#include "ListaDoblementeEnlazada.h"
using namespace std;

int probarColaC();
int probarColaP();
int iterarSColaC();
int iterarAColaC();
int probarListaDE();
ColaCircular * prueba = new ColaCircular;

int main()
{
	int opcion = 0;
	cout << "	1.Probar Cola Circular." << endl;
	cout << "	2.Probar Cola Prioridad." << endl;
	cout << "	3.Probar Lista Doblemente Enlazada." << endl;
	cout << "Selecciones una opcion:" << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		probarColaC();
		break;
	case 2:
		probarColaP();
		break;
	case 3:
		probarListaDE();
		break;
	default:
		break;
	}
    return 0;
}

int probarColaP() {
	ColaPrioridad * pruebaColaP = new ColaPrioridad;
	pruebaColaP->insertarElem(1,1);
	pruebaColaP->insertarElem(2,2);
	pruebaColaP->insertarElem(3,3);
	pruebaColaP->insertarElem(4,4);
	pruebaColaP->insertarElem(5,5);
	cout << "--------------" << endl;
	cout << "Se insertaron: " << endl;
	cout << "	Numero	|Prioridad" << endl;
	cout << "	1	|	1" << endl;
	cout << "	2	|	2" << endl;
	cout << "	3	|	3" << endl;
	cout << "	4	|	4" << endl;
	cout << "	5	|	5" << endl;
	cout << "--------------" << endl;
	cout << "Y se Imprime" << endl;
	while (pruebaColaP->isEmpty()==false)
	{
		cout << pruebaColaP->atender()->getInfo() << endl;
	}
	system("pause");
	return 0;
}
int probarListaDE() {
	ListaDoblementeEnlazada * pruebaListaDE = new ListaDoblementeEnlazada;
	pruebaListaDE->addNodo(1);
	pruebaListaDE->addNodo(2);
	pruebaListaDE->addNodo(3);
	pruebaListaDE->addNodo(4);
	pruebaListaDE->addNodo(5);
	pruebaListaDE->addNodo(6);
	pruebaListaDE->addNodo(7);
	pruebaListaDE->addNodo(8);
	pruebaListaDE->addNodo(9);
	pruebaListaDE->addNodo(0);
	pruebaListaDE->mostrarListaDoblementeEnlazada();
	system("pause");
	return 0;
}

int probarColaC() {
	prueba->insertarElem(1);
	prueba->insertarElem(2);
	prueba->insertarElem(3);
	prueba->insertarElem(4);
	iterarSColaC();
	return 0;
}

int iterarSColaC() {
	int opcion;
	cout << "-----" << endl;
	cout << prueba->siguiente()->getInfo()<<endl;
	cout << "Desea continuar:" << endl;
	cout << "	1.Siguiente." << endl;
	cout << "	2.Anterior." << endl;
	cout << "	3.Salir." << endl;

	cin >> opcion;
	switch (opcion)
	{
	case 1:
		iterarSColaC();
		break;
	case 2:
		iterarAColaC();
		break;
	case 3:
		break;
	default:
		break;
	}
	return 0;
}

int iterarAColaC() {
	int opcion;
	cout << "-----" << endl;
	cout << prueba->anterior()->getInfo() << endl;
	cout << "Desea continuar:" << endl;
	cout << "	1.Siguiente." << endl;
	cout << "	2.Anterior." << endl;
	cout << "	3.Salir." << endl;

	cin >> opcion;
	switch (opcion)
	{
	case 1:
		iterarSColaC();
		break;
	case 2:
		iterarAColaC();
		break;
	case 3:
		break;
	default:
		break;
	}
	return 0;
}