#include <iostream>
#include "Lista.h"
using namespace std;

int main() 
{
	List* lista2 = new List(5);
	AdmiList2* adm = new AdmiList2();
	adm->insertarAlFinal(lista2, Figura("a", 1));
	adm->insertarAlFinal(lista2, Figura("b", 2));
	adm->insertarAlFinal(lista2, Figura("c", 3));
	cout << "---" << endl;
	//adm->recorrerLista(lista2);
	//cout << "---" << endl;
	adm->insertarAlInicio(lista2, Figura("d", 4));
	adm->insertarAlInicio(lista2, Figura("e", 5));
	cout << "---" << endl;
	//adm->eliminarAlFinal(lista2);
	adm->eliminarAlInicio(lista2);
	adm->recorrerLista(lista2);
	//adm->busquedaFigura(lista2, Figura("a", 1));//existe
	//adm->busquedaFigura(lista2, Figura("f", 1));//no existe
	cout << "---" << endl;
}