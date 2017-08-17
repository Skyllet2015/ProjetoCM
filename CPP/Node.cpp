#include "../HPP/Node.hpp"

Node::Node(int nome){
  this->nome = nome;
}

void Node::addAresta(Aresta* arest){
  this->vArestas.push_back(arest);
}

void Node::Print(){
  cout<<"Inicio: "<<this->nome<<endl;
  if(vArestas.size() == 0){
    cout<<"NÃO TEM ARESTAS!"<<endl;
  }else{
    for(int i = 0; i < vArestas.size(); i++){
      vArestas[i]->Print();
    }
  }
  cout<<"\n\n";
}
