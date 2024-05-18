#pragma once
#include <iostream>
using namespace std;
class persona{
	// atributos de la clase
protected: string nombres, apellidos, direccion, fechaingreso;
		 int telefono = 0;
		 // metodo constructor "tiene el mismo nombre de la clase"
protected:
	persona() {
	}
	persona(string nom, string ape, string dir, int tel, string fi) {
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fechaingreso = fi;
	}
};

