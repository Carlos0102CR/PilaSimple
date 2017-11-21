// PilaSimple.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include "ColaCicular.h"
#include "Cola.h"
#include "Nodo.h"
using namespace std;

int probarColaC();
int iterarSColaC();
int iterarAColaC();
ColaCircular * prueba = new ColaCircular;

int main()
{
	int opcion = 0;
	cout << "	1.Probar Cola Circular." << endl;
	cout << "Selecciones una opcion:" << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		probarColaC();
		break;
	default:
		break;
	}
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