// mysql_c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "cliente.h"
using namespace std;
int main()

    string nombre, apellidos, NIT, genero, telefono, correo_electronico, fechaingreso;
    int telefono;
    cout << "ingrese NIT: ";
    getline(cin, NIT);
    cout << "ingrese nombre: ";
    getline(cin, nombre);
    cout << "ingrese apellidos: ";
    getline(cin, apellidos);
    cout << "ingrese correo_electronico: ";
    getline(cin, correo_electronico);
    cout << "ingrese telefono: ";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese fechaingreso: ";
    cin >> fechaingreso;
    
    cliente c = cliente (nombre, apellidos, NIT, genero, telefono, correo_electronico, fechaingreso);
    c.crear();
    c.leer();
    system ("pause");
    return 0;
}
