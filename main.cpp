#include "Cliente.cpp"
#include <iostream>

using namespace std;

main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingrese NIT: ";
	cin>>nit;
	cout<<"Ingrese NOMBRES: ";
	cin>>nombres;
	cout<<"Ingrese APELLIDOS: ";
	cin>>apellidos;
	cout<<"Ingrese DIRECCION: ";
	cin>>direccion;
	cout<<"Ingrese TELEFONO: ";
	cin>>telefono;
	
	// Instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
}
