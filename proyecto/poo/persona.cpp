#include <iostream>
using namespace std;
class persona{
	// atributos de la clase
	protected : string nombres,apellidos,direccion;
				int telefono;
	// metodo constructor "tiene el mismo nombre de la clase"
	protected : 
			persona(){
			}
			persona (string nom,string ape,string dir,int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
			}
	// metodo para mostrar la informacion
	void mostrar ();
};