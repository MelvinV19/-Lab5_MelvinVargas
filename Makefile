make.out:Animal.o Cola.o main.o Orejas.o Patas.o Zoologico.o Ojos.o Pelaje.o
	g++ Animal.o Cola.o main.o Orejas.o Patas.o Zoologico.o Ojos.o Pelaje.o -o make.out

Animal.o: Animal.h Animal.cpp
	g++ -c Animal.cpp

Cola.o: Cola.h Cola.cpp
	g++ -c Cola.cpp

main.o: Zoologico.h  Animal.h  Patas.h  Pelaje.h  Ojos.h  Orejas.h  Cola.h 
	g++ -c main.cpp

Orejas.o: Orejas.h Orejas.cpp
	g++ -c Orejas.cpp

Patas.o: Patas.h Patas.cpp
	g++ -c Patas.cpp

Zoologico.o: Zoologico.h Zoologico.cpp Animal.h Animal.cpp
	g++ -c Zoologico.cpp

Ojos.o: Ojos.h Ojos.cpp
	g++ -c Ojos.cpp

Pelaje.o: Pelaje.h Pelaje.cpp
	g++ -c Pelaje.cpp
