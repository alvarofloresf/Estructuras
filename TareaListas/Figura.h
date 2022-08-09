#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figura
{
private:
	string nombre;
	int angulo;

public:
	Figura(string Nombre, int Angulo) {
		nombre = Nombre;
		angulo = Angulo;
	}

	Figura() {

	}

	~Figura(){
	}

	void setNombre(string nombreF) {
		this->nombre = nombreF;
	}

	void setAngulo(int anguloF) {
		this->angulo = anguloF;
	}

	string getNombre() {
		return nombre;
	}

	int getAngulo() {
		return angulo;
	}
};

