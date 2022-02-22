#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona {
	// Atributos
	private : string nit;
	
	// Constructor
	public : 
	Cliente (){
	}

	Cliente (string nom, string ape, string dir, int tel, string n) : Persona(nom,ape,dir,tel){
		nit = n;
	}
	
	void mostrar(){
		cout<<"______________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};
