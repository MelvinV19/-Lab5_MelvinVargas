#ifndef OREJAS_H
#define OREJAS_H
#include <string>
using namespace std;

class Orejas{
	private:
		double tam;
		string capacidad;
	public:
		Orejas();
		Orejas(double,string);
		double getTam();
		string getCapacidad();
	

};


#endif

