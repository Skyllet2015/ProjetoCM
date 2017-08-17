all:Cor.o Aresta.o Vertice.o Grasp.o main.o
	g++ main.o Grasp.o Vertice.o Aresta.o Cor.o -o Grasp.bin

main.o: CPP/main.cpp
	g++ -c CPP/main.cpp

Grasp.o: CPP/Grasp.cpp
	g++ -c CPP/Grasp.cpp

Vertice.o: CPP/Vertice.cpp
	g++ -c CPP/Vertice.cpp

Aresta.o: CPP/Aresta.cpp
	g++ -c CPP/Aresta.cpp

Cor.o: CPP/Cor.cpp
	g++ -c CPP/Cor.cpp


clear:
	rm *.o
	rm *.bin
