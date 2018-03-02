#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H
#include <string>
#include "Animal.h"
#include <vector>
using namespace std;

class Zoologico{
	private:
		string nombre;
		int tam;
		int capacidad;
		vector<Animal*> artica;
		vector<Animal*> desertica;
		vector<Animal*> jungla;
		vector<Animal*> sabana;

	public:
		Zoologico();
		Zoologico(string,int,int);
		vector<Animal*> getArtica();
		vector<Animal*> getDesertica();
		vector<Animal*> getJungla();
		vector<Animal*> getSabana();
		string getNombre();
		int getTam();
		int getCapacidad();
		void transferir(Animal*,int);
		void imprimir();
		
		
};

#endif
