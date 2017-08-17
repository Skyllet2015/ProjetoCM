#include "../HPP/Aresta.hpp"

Aresta::Aresta(Vertice* inicio, int peso, Vertice* fim){
  this->inicio = inicio;
  this->peso = peso;
  this->fim = fim;
  this->cor = NULL;
}

void Aresta::setCor(Cor* cor){
  this->cor = cor;
}

void Aresta::Print(){
  cout<<"Inicio: ";
  this->inicio->Print();
  cout<<"Cor: ";
  this->cor->Print();
  cout<<"Peso: "<<this->peso<<endl;
  cout<<"Fim: ";
  this->fim->Print();
}
