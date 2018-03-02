#include "Zoologico.h"
#include <vector>
#include "Animal.h"
#include <string>
#include <iostream>
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

void Zoologico::transferir(Animal* animal,int tipo){
	if(tipo==1){
		artica.push_back(animal);
	}
	if(tipo==2){
		desertica.push_back(animal);
	}
	if(tipo==3){
		jungla.push_back(animal);
	}
	if(tipo==4){
		sabana.push_back(animal);
	}

}

void Zoologico::imprimir(){
	Animal* animal;
	cout<<"Zona Artica: "<<endl;
	for(int i=0;i<artica.size();i++){
		animal=artica[i];
		cout<<" "<<animal->getNombre()<<endl;
	}
	cout<<"Zona Desertica: "<<endl;
	for(int i=0;i<desertica.size();i++){
		animal=desertica[i];
		cout<<" "<<animal->getNombre()<<endl;

	}
	cout<<"Zona Jungla Tropical: "<<endl;
	for(int i=0;i<jungla.size();i++){
		animal=jungla[i];
		cout<<" "<<animal->getNombre()<<endl;
	}
	cout<<"Zona Sabana: "<<endl;
	for(int i=0;i<sabana.size();i++){
		animal=sabana[i];
		cout<<" "<<animal->getNombre()<<endl;
	}

}
