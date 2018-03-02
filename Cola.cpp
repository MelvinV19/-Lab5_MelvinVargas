#include "Cola.h"
using namespace std;

Cola::Cola(){

}

Cola::Cola(double largo,bool peluda){
	this->largo=largo;
	this->peluda=peluda;
}

double Cola::getLargo(){
	return largo;
}

bool Cola::getPeluda(){
	return peluda;
}
