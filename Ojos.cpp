#include "Ojos.h"
#include <string>
using namespace std;


Ojos::Ojos(){

}

Ojos::Ojos(string color,bool vision){
	this->color=color;
	this->vision=vision;
}

string Ojos::getColor(){
	return color;
}

bool Ojos::getVision(){
	return vision;
}
