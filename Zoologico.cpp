#include "Zoologico.h"
#include <vector>
#include "Animal.h"
#include <string>
using namespace std;


Zoologico::Zoologico(){

}

Zoologico::Zoologico(string nombre,int tam,int capacidad){
	this->nombre=nombre;
	this->tam=tam;
	this->capacidad=capacidad;
}

string Zoologico::getNombre(){
	return nombre;
}

int Zoologico::getTam(){
	return tam;
}

int Zoologico::getCapacidad(){
	return capacidad;
}

vector<Animal*> Zoologico::getArtica(){
	return artica;
}
vector<Animal*> Zoologico::getDesertica(){
	return desertica;
}
vector<Animal*> Zoologico::getJungla(){
	return jungla;
}
vector<Animal*> Zoologico::getSabana(){
	return sabana;
}
