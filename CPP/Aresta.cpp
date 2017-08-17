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
  cout<<endl<<"Inicio: ";
  inicio->Print();
  cout<<endl;
  cout<<"Cor: ";
  if(cor == NULL){
    cout<<"-1"<<endl;
  }else{
    this->cor->Print();
    cout<<endl;
  }
  cout<<"Peso: "<<this->peso<<endl;
  cout<<"Fim: ";
  fim->Print();
  cout<<endl<<endl;
}
