#include "../HPP/Vertice.hpp"

Vertice::Vertice(int nome){
  this->nome = nome;
}

void Vertice::Print(){
  cout<<"Inicio: "<<this->nome<<endl;
}
