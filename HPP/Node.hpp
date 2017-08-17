#ifndef __NODE_HPP__
#define __NODE_HPP__

#include "Include.hpp"
#include "Aresta.hpp"

class Node{
public:
  Node(int nome);
  void addAresta(Aresta* arest);
  void Print();

private:
  int nome; //Identificador do Objeto Node
  vector<Aresta*> vArestas; //Guarda as arestas do Objeto Node
};


#endif //__NODE_HPP__
