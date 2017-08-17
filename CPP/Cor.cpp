#include "../HPP/Cor.hpp"

Cor::Cor(int identificador, float pesoMinimo, float pesoMaximo){
  this->identificador = identificador;
  this->pesoMinimo = pesoMinimo;
  this->pesoMaximo = pesoMaximo;
}

void Cor::Print(){
  cout<<"Identificador: "<<this->identificador<<endl;
  cout<<"Peso Mínimo: "<<this->pesoMinimo<<endl;
  cout<<"Peso Máximo: "<<this->pesoMaximo<<endl<<endl;
}
