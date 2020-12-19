all: Polinomio.o main.o
	g++ -o poly Polinomio.o main.o

Polinomio.o: Polinomio.cpp Polinomio.h
	g++ -c Polinomio.cpp

main.o: main.cpp
	g++ -c main.cpp