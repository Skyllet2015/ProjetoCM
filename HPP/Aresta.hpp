#ifndef __ARESTA_HPP__
#define __ARESTA_HPP__

#include "Include.hpp"

class Aresta{
public:
  Aresta(int cor, int peso, int fim);
  void Print();

  friend class Node;
private:
  int cor;//Identifica a cor da Aresta no Grasp
  int fim; //Indica o Node Final
  int peso;
};

#endif //__ARESTA_HPP__
