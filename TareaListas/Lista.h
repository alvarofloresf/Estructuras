#pragma once
#include <iostream>
#include "Figura.h"
using namespace std;

class List
{
private:
	Figura* vec;
	int ultimo;
	int primero;
	int tam;

public:
	List(int Tam) {
		tam = Tam;
		vec = new Figura[tam];
		ultimo = -1;
		primero = -1;
	}

	~List() {

	}

	int getPrimero() {
		return primero;
	}

	int getUltimo() {
		return ultimo;
	}

	int getTam() {
		return tam;
	}

	void setPrimero(int Primero) {
		primero = Primero;
	}

	void setUltimo(int Ultimo) {
		ultimo = Ultimo;
	}

	Figura getFiguraPos(int pos) {
		return vec[pos];
	}

	void setFiguraPos(int pos, Figura f) {
		vec[pos] = f;
	}
};

class AdmiList2
{
public:
	AdmiList2(){}
	~AdmiList2(){}
	void recorrerLista(List* lista) {
		int i = lista->getPrimero();
		while (i != lista->getUltimo())
		{
			cout << lista->getFiguraPos(i).getNombre() << endl;
			if (i != (lista->getTam()-1))
			{
				i++;
			}
			else
			{
				i = 0;
			}
		}
		if (i == lista->getUltimo())
		{
			cout << lista->getFiguraPos(lista->getUltimo()).getNombre() << endl;
		}
	}

	void insertarAlFinal(List* lista, Figura f) {
		if (lista->getUltimo() != -1) {
			if ((lista->getUltimo() != lista->getTam()-1) && (lista->getUltimo()+1 != lista->getPrimero()))
			{
				lista->setUltimo(lista->getUltimo() + 1);
				lista->setFiguraPos(lista->getUltimo(), f);
			}
			else {
				if ((lista->getUltimo()==lista->getTam()-1) && (lista->getPrimero()!=0))
				{
					lista->setUltimo(0);
					lista->setFiguraPos(lista->getUltimo(), f);
				}
			}
		}
		else
		{
			lista->setPrimero(lista->getTam()-1);
			lista->setUltimo(lista->getTam() - 1);
			lista->setFiguraPos(lista->getUltimo(), f);
		}
	}

	void insertarAlInicio(List* lista, Figura f) {
		if (lista->getPrimero() != -1) {
			if ((lista->getPrimero() != lista->getUltimo()) && (lista->getPrimero() - 1 != lista->getUltimo()))
			{
				lista->setPrimero(lista->getPrimero() - 1);
				lista->setFiguraPos(lista->getPrimero(), f);
			}
			else {
				if ((lista->getPrimero() == 0) && (lista->getUltimo() != lista->getTam()-1))
				{
					lista->setPrimero(lista->getTam()-1);
					lista->setFiguraPos(lista->getPrimero(), f);
				}
			}
		}
		else
		{//en teoria esta bien
			lista->setPrimero(0);//0
			lista->setUltimo(0);//0
			lista->setFiguraPos(lista->getPrimero(), f);
		}
	}

	void eliminarAlFinal(List* lista) {
		int i = 1;
		if (lista->getUltimo() == lista->getTam() - i) {
			lista->setUltimo(lista->getUltimo() - 1);
		}
		else {
			if ((lista->getUltimo() != -1) && ((lista->getTam() - i))) {
				lista->setUltimo(lista->getUltimo() - 1);
				i++;
			}
		}
	}

	void eliminarAlInicio(List* lista){
		int i = 0;
		if (lista->getPrimero() == i) {
			lista->setPrimero(lista->getPrimero() - 1);
		}
		else {
			if ((lista->getPrimero() != -1) && ((lista->getTam() - i))) {
				lista->setPrimero(lista->getPrimero() - 1);
				i++;
			}
		}
	}

	void busquedaFigura(List* lista, Figura f) {
		int aux = lista->getTam();
		int a;
		a = 0;
		for (int i = 0; i < aux; i++)
		{
			if (lista->getFiguraPos(i).getNombre() == f.getNombre()) {
				cout << "existe" << endl;
				a = 1;
			}
		}
		if (a != 1) 
		{ 
			cout << "no existe figura" << endl; 
		}
	}
};

