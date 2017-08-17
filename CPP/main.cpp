#include "../HPP/Include.hpp"
#include "../HPP/Node.hpp"
#include "../HPP/Aresta.hpp"

int main(int argc, char** argv){
  int quantidade = 5;
  vector<Node*> vNodesGrasp;
  vector<Aresta*> vArestasGrasp;

  for(int i = 0; i < quantidade; i++){
    Node* novo = new Node(i);
    vNodesGrasp.push_back(novo);
  }

  for(int i = 0; i < quantidade; i++){
    for(int j = 0; j < quantidade; j++){
      if(i != j){
        Aresta* novo = new Aresta(-1, (i+1) * j, j);
        vNodesGrasp[i]->addAresta(novo);        
      }
    }
  }

  for(int i = 0; i < quantidade; i++){
    vNodesGrasp[i]->Print();
  }
}
