#include "Orejas.h"
#include <string>
using namespace std;

Orejas::Orejas(){

}

Orejas::Orejas(double tam,string capacidad){
	this->tam=tam;
	this->capacidad=capacidad;
	
}


double Orejas::getTam(){
	return tam;
}

string Orejas::getCapacidad(){
	return capacidad; 
}
	


