#pragma once
#include <mysql.h>
#include <iostream>
using namespace std;
class conexioBD {
private: MYSQL* conectar;
public :
	void abrir_conexion() {
		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "localhost", "root", "Doom2023$", "db_proyecto", 3306, NULL, 0);
	}
	MYSQL* getconectar() {
		return conectar;
	}
	void cerrar_conexion() {
		mysql_close(conectar);
	}

};

