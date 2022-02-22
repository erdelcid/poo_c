#include <iostream>
using namespace std;

class Persona{
	// Atributos
	protected : string nombres, apellidos, direccion, fechanac;
				int telefono;
	
	// Constructor
	protected :
			Persona(){
			}
			Persona(string nom, string ape, string dir, int tel, string fn){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				fechanac = tel;
			}
			
	// set
	void setnom(string nom){nombres = nom;}
	void setape(string ape){apellidos = ape;}
	void setdir(string dir){direccion = dir;}
	void settel(int tel){telefono = tel;}
	void setfec(string fn){fechanac = fn;}

	// get
	string getnom(){return nombres;}
	string getape(){return apellidos;}
	string getdir(){return direccion;}
	int    gettel(){return telefono;}
	string getfec(){return fechanac;}
	
	// Métodos
	void mostrar(){

		cout<<"______________________"<<endl;
		cout<<"Nombres.......:"<<nombres<<endl;
		cout<<"Apellidos.....:"<<apellidos<<endl;
		cout<<"Direccion.....:"<<direccion<<endl;
		cout<<"Telefono......:"<<telefono<<endl;
		cout<<"FechaNac......:"<<fechanac<<endl;
	}
	
	void agregar(){
	}
};
