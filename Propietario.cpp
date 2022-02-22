#include <iostream>
using namespace std;

class Propietario{
	// Atributos
	protected : string nit;
				double cui;
	
	// Constructor
	protected :
			Propietario(){
			}
			Propietario(string n, double c){
				nit = n;
				cui = c;
			}
			
	// set
	void setnit(string n){nit = n;}
	void setcui(double c){cui = c;}

	// get
	string getnit(){return nit;}
	double getcui(){return cui;}
	
	// Métodos
	void mostrar(){

		cout<<"______________________"<<endl;
		cout<<"NIT.......:"<<nit<<endl;
		cout<<"CUI.......:"<<cui<<endl;
	}
};
