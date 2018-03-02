#ifndef ANIMAL_H
#define ANIMAL_H
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"
#include <string>
using namespace std;

class Animal{
	private:
		string especie;
		string nombre;
		double tam;
		int tipo;
		Patas* patas;
		Pelaje* pelaje;
		Ojos* ojos;
		Orejas* orejas;
		Cola* cola;

	public:
		Animal();
		Animal(string,string,double,int,Patas*,Pelaje*,Ojos*,Orejas*,Cola*);
		string getEspecie();
		string getNombre();
		double getTam();
		int getTipo();

};

#endif
