#include "../HPP/Grasp.hpp"

Grasp::Grasp(float adaptacao, int maxInt){
  this->adaptacao = adaptacao;
  this->coresIniciais = 0;
  this->maxInt = maxInt;
}

int Grasp::Inicializar(){
  bool cont = true;
  while(cont){
    int inicio = -1;
    int fim = -1;
    int peso = -1;
    cout<<"Digite o Vertice de início: ";
    cin>>inicio;
    cout<<"Digite o Vertice do fim: ";
    cin>>fim;
    cout<<"Digite o Peso da Aresta: ";
    cin>>peso;

    Aresta* A1 = new Aresta(Busca(inicio), peso, Busca(fim));
    vectorAresta.push_back(A1);

    cout<<"Digite 1 para inserir um novo elemento ou 0 para sair: ";
    cin>>cont;

    int controle = 0;
    for(int i = 0; i < vectorAresta.size(); i++){
      if(vectorCores.size() == 0){
        Adaptacao();
      }else{
        vectorAresta[i]->cor = BuscaCor(vectorAresta[i]->peso);
      }
    }
  }
}

Vertice* Grasp::Busca(int chave){
  for(int i = 0; i < vectorVertice.size(); i++){
    if(vectorVertice[i]->nome == chave){
      return vectorVertice[i];
    }
  }
  Vertice* novo = new Vertice(chave);
  vectorVertice.push_back(novo);
  return novo;
}

Cor* Grasp::BuscaCor(int pesoMin){
  Cor* ret = NULL;
  if(vectorCores.size() == 0){
    Cor* nova = new Cor(0, pesoMin, pesoMin+10);
    vectorCores.push_back(nova);
    ret = nova;
  }for(int i = 0; i < vectorCores.size(); i++){
    if(vectorCores[i]->pesoMinimo >= pesoMin){
      ret = vectorCores[i];
    }
  }if(ret == NULL){
    Cor* nova = new Cor(vectorCores.size()+1, pesoMin, pesoMin+10);
    vectorCores.push_back(nova);
    ret = nova;
  }
  return ret;
}

void Grasp::Adaptacao(){
  this->coresIniciais = (this->vectorAresta.size() * this->adaptacao);
}

void Grasp::Print(){
  cout<<"Quantidade de Arestas: "<<vectorAresta.size()<<endl;
  cout<<"Quantidade de Vertices: "<<vectorVertice.size()<<endl;
  for(int i = 0; i < vectorAresta.size(); i++){
    vectorAresta[i]->Print();
  }
}
