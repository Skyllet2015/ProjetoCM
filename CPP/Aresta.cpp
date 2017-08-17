#include "../HPP/Aresta.hpp"

Aresta::Aresta(int cor, int peso, int fim){
  this->cor = cor;
  this->peso = peso;
  this->fim = fim;
}

void Aresta::Print(){
  cout<<"Cor: "<<this->cor<<" Peso: "<<this->peso<<"  Fim: "<<this->fim<<endl;
}
