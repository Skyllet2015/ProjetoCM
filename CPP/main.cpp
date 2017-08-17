#include "../HPP/Include.hpp"
#include "../HPP/Grasp.hpp"

int main(int argc, char** argv){
  float adaptacao = 10;
  int maxInter  = 10;

  Grasp* gr = new Grasp(adaptacao, maxInter);
  gr->Inicializar();
  gr->Print();

/*
  int quantidade = 5;
  vector<Vertice*> vVerticesGrasp;
  vector<Aresta*> vArestasGrasp;

  for(int i = 0; i < quantidade; i++){
    Vertice* novo = new Vertice(i);
    vVerticesGrasp.push_back(novo);
  }

  for(int i = 0; i < quantidade; i++){
    for(int j = 0; j < quantidade; j++){
      if(i != j){
        Aresta* novo = new Aresta(-1, (i+1) * j, j);
        vVerticesGrasp[i]->addAresta(novo);
      }
    }
  }

  for(int i = 0; i < quantidade; i++){
    vVerticesGrasp[i]->Print();
  }*/

}
