#include <iostream>
#include <string>
#include <vector>
#include "Zoologico.h"
#include "Animal.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"


using namespace std;

//funcion del menu
int menu();

int main(){
	string nombre;
	int tam;
	int capacidad;
	int op=0;
	cout<<"Ingrese nombre del zoologico: "<<endl;
	cin>>nombre;
	cout<<"Ingrese size del zoologico: "<<endl;
	cin>>tam;
	cout<<"Ingrese capacidad del zoologico: "<<endl;
	cin>>capacidad;
	Zoologico* zoo=new Zoologico(nombre,tam,capacidad);
	vector<Animal*>listaespera;
	while(op!=5){
		switch(op=menu()){
			case 1:{
					   //creamos el animal
					   string especie;
					   string nombre,tipopatas;
					   double tam;
					   int tipo,cantidadpatas,largopatas;
					   cout<<"Ingrese nombre de especie: "<<endl;
					   cin>>especie;
					   cout<<"Ingrese nombre del animal: "<<endl;
					   cin>>nombre;
					   cout<<"Ingrese size del animal: "<<endl;
					   cin>>tam;
					   cout<<"1.Zona Artica"<<endl;
					   cout<<"2.Zona Desertica"<<endl;
					   cout<<"3.Zona de Jungla Tropical"<<endl;
					   cout<<"4.Zona Sabana"<<endl;
					   cout<<"Ingrese numero de zona"<<endl;
					   cin>>tipo;


					   //creamos las patas
					   cout<<"Ingrese cantidad de patas: "<<endl;
					   cin>>cantidadpatas;
					   cout<<"Ingrese largo patas: "<<endl;
					   cin>>largopatas;
					   cout<<"Ingrese tipo de patas: "<<endl;
					   cin>>tipopatas;
					   Patas* patas=new Patas(cantidadpatas,largopatas,tipopatas);


					   //creamos el pelaje
					   double largopelaje;
					   double grosorpelaje;
					   string colorpelaje;

					   cout<<"Ingrese Color del pelaje: "<<endl;
					   cin>>colorpelaje;
					   cout<<"Ingrese largo del pelaje: "<<endl;
					   cin>>largopelaje;
					   cout<<"Ingrese grosor del pelaje: "<<endl;
					   cin>>grosorpelaje;
					   Pelaje* pelaje=new Pelaje(colorpelaje,grosorpelaje,largopelaje);

					   //creamos los ojos
					   string colorojos;
					   bool vision;
					   int des;
					   cout<<"Ingrese color de ojos: "<<endl;
					   cin>>colorojos;
					   cout<<"1.vision nocturna"<<endl;
					   cout<<"2.sin vision nocturna"<<endl;
					   cout<<"Ingrese numero de vision"<<endl;
					   cin>>des;
					   if(des==1){
						   vision=true;
					   }else{
						   vision=false;
					   }
					   Ojos* ojos=new Ojos(colorojos,vision);


					   //creamos las orejas
					   double tamorejas;
					   string capacidadorejas;
					   cout<<"Ingrese size de las orejas: "<<endl;
					   cin>>tamorejas;
					   cout<<"Ingrese capacidad de audicion de las orejas: "<<endl;
					   cin>>capacidadorejas;
					   Orejas* orejas=new Orejas(tamorejas,capacidadorejas);


					   //creamos la cola
					   double largocola;
					   bool peluda;
					   int peludita;
					   cout<<"Ingrese largo de la cola: "<<endl;
					   cin>>largocola;
					   cout<<"1.Peluda"<<endl;
					   cout<<"2.No peluda"<<endl;
					   cout<<"Ingrese numero del tipo de cola: "<<endl;
					   cin>>peludita;
					   if(peludita==1){
						   peluda=true;
	
					   }else{
						   peluda=false;

					   }
					   Cola* cola=new Cola(largocola,peluda);

					   //creamos el animal y lo metemos a la lista de espera
					   Animal* animal=new Animal(especie,nombre,tam,tipo,patas,pelaje,ojos,orejas,cola);
					   listaespera.push_back(animal);
					   cout<<"El animal se ha agregado a la lista de espera"<<endl;
					   delete animal;
					   delete cola;
					   delete patas;
					   delete ojos;
					   delete orejas;
					   delete pelaje;


				   }
				   break;
			case 2:{
					   Animal* animal;
					   for(int i=0;i<listaespera.size();i++){
						   animal=listaespera[i];
						   cout<<animal->getNombre()<<endl;
					   }

				   }
				   break;
			case 3:{
					   int pos;
					   cout<<"Ingrese la posicion del animal que desea elminar";
					   cin>>pos;
					   delete listaespera[pos];
					   listaespera.erase(listaespera.begin()+pos);
					   cout<<"Animal eliminado"<<endl;
					

				   }
				   break;
			case 4:{

				   }
				   break;
			case 5:{

				   }
				   break;
			case 6:{

				   }
				   break;

		}

	}





	return 0;
}


int menu(){
	int bandera=0;
	while(bandera==0){
		int num;
		cout<<"**************MENU****************"<<endl;
		cout<<"1.Crear un animal"<<endl;
		cout<<"2.Ver lista de espera"<<endl;
		cout<<"3.Eliminar de la lista de espera"<<endl;
		cout<<"4.Transferir animales al zoologico"<<endl;
		cout<<"5.Listar animales del zoologico"<<endl;
		cout<<"6.Salir"<<endl;
		cin>>num;
		return num;
	}
}

