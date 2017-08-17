#ifndef __GRASP_HPP__
#define  __GRASP_HPP__

  #include "Include.hpp"
  #include "Vertice.hpp"
  #include "Aresta.hpp"

  using namespace std;

  class Grasp{
  public:
    Grasp(float adaptacao, int maxInt);
    int Inicializar();
    void newAresta(const string* str, char delim=',');
    int Converter(string str);
    void Print();
  private:
    float adaptacao; //Define o nivel de adaptação do grasp
    int maxInt; //Critério de parada do algoritmo
    vector<Aresta*> vectorAresta;
  };

#endif //__GRASP_HPP__
