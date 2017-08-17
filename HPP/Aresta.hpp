#ifndef __ARESTA_HPP__
#define __ARESTA_HPP__

  #include "Include.hpp"
  #include "Vertice.hpp"
  #include "Cor.hpp"

  class Aresta{
  public:
    Aresta(Vertice* inicio, int peso, Vertice* fim);
    void setCor(Cor* cor);
    void Print();

    friend class Grasp;
  private:
    Vertice* inicio; //Indica o Vertice Final
    Cor* cor;//Identifica a cor da Aresta no Grasp
    Vertice* fim; //Indica o Vertice Final
    int peso;
  };

#endif //__ARESTA_HPP__
