#ifndef __GRASP_HPP__
#define  __GRASP_HPP__

#include "Include.hpp"
#include "Aresta.hpp"
#include "Node.hpp"

class Grasp{
public:
  Grasp(pair* arestas, int adaptacao, int maxInt);
private:
  int adaptacao; //Define o nivel de adaptação do grasp
  int maxInt; //Critério de parada do algoritmo
};




#endif //__GRASP_HPP__
