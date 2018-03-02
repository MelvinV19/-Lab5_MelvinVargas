#include "Animal.h"
#include <string>
using namespace std;

Animal::Animal(){

}


Animal::Animal(string especie,string nombre,double tam,int tipo,Patas* patas,Pelaje* pelaje,Ojos* ojos,Orejas* orejas,Cola* cola){
	this->especie=especie;
	this->nombre=nombre;
	this->tam=tam;
	this->tipo=tipo;
	this->patas=patas;
	this->pelaje=pelaje;
	this->ojos=ojos;
	this->orejas=orejas;
	this->cola=cola;

}

string Animal::getEspecie(){
	return especie;
}

string Animal::getNombre(){
	return nombre;
}

double Animal::getTam(){
	return tam;
}

int Animal::getTipo(){
	return tipo;
}
