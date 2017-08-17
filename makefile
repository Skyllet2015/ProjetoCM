all: main.o Node.o Aresta.o
	g++ main.o Node.o Aresta.o -o Grasp.bin

main.o: CPP/main.cpp
	g++ -c CPP/main.cpp

Node.o: CPP/Node.cpp
	g++ -c CPP/Node.cpp

Aresta.o: CPP/Aresta.cpp
	g++ -c CPP/Aresta.cpp

clear:
	rm *.o
	rm *.bin
