#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include "conexioBD.h"
#include "persona.h"
using namespace std;
class clientes : persona {
	//atributos
private: string nit;

	   //constructor
public:
	clientes() {
	}

	clientes(string nom, string ape, string dir, int tel,string fi, string n) : persona(nom, ape, dir, tel, fi) {
		nit = n;

	}
	// metodos
	// set (modificar)
	void setnit(string n) { nit = n; }
	void setnombres(string nom) { nombres = nom; }
	void setapellidos(string ape) { apellidos = ape; }
	void setdireccion(string dir) { direccion = dir; }
	void settelefono(int tel) { telefono = tel; }
	// get (mostrar)
	string getnit() { return nit; }
	string getnombres() { return nombres; }
	string getapellidos() { return apellidos; }
	string getdireccion() { return direccion; }
	int gettelefono() { return telefono; }


	//metodos
	void crear() {
		int q_estado;
		conexioBD cn = conexioBD();
		cn.abrir_conexion();
		if (cn.getconectar()) {
			string t = to_string(telefono);
			string insert = "INSERT INTO clientes(nombre, apellidos, NIT, genero, telefono, correo_electronico, fechaingreso)VALUES('" + nombres + "','" + apellidos + "','" + nit + "','" + genero + "','" + t + "','" + correo_electronico + "','" + fechaingreso + "'); ";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getconectar(), i);
			if (!q_estado) {
				cout << "ingreso exitoso..." << endl;
			}
			else {
				cout << "error al ingresar..." << endl;
			}
		} else {
			cout << "error en la conexion..." << endl;
		}
		cn.cerrar_conexion();


	}


	void leer() {
		int q_estado;
		conexioBD cn = conexioBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getconectar()) {
			string consulta = "select * from clientes";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getconectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getconectar());
				cout << "--------------------clientes--------------" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << endl;
				}
			}
			else {
				cout << "error al consultar " << endl;
			}
		}
		else {
			cout << "error en la conexion..." << endl;
		}
		cn.cerrar_conexion();


	}
};

