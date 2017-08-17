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
    void Adaptacao();
    Vertice* Busca(int chave);
    Cor* BuscaCor(int pesoMin);
    void Print();
  private:
    float adaptacao; //Define o nivel de adaptação do grasp
    int maxInt; //Critério de parada do algoritmo
    int coresIniciais;
    vector<Aresta*> vectorAresta;
    vector<Vertice* > vectorVertice;
    vector<Cor* > vectorCores;
  };

#endif //__GRASP_HPP__
