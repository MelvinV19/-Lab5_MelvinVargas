#include "Patas.h"
#include <string>
using namespace std;

Patas::Patas(){

}

Patas::Patas(int cantidad,double largo,string tipo){
	this->cantidad=cantidad;
	this->largo=largo;
	this->tipo=tipo;
}	

int Patas::getCantidad(){
	return cantidad;
}

double Patas::getLargo(){
	return largo;
}

string Patas::getTipo(){
	return tipo;
}


