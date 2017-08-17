#include "../HPP/Grasp.hpp"

Grasp::Grasp(float adaptacao, int maxInt){
  this->adaptacao = adaptacao;
  this->maxInt = maxInt;
}

int Grasp::Inicializar(){
  FILE * arq;
  arq = fopen("Entrada.txt", "r");
  if (arq == NULL) {
    cout << "Não Foi Possível abrir" << endl;
    return 1;
  }
  int i = 1;
  char Linha[100];
  while (fgets(Linha, MAX, arq) != NULL);
    for (int i = 0; i < MAX; i++) {
    entrada += arvore[i];
  }
  fclose(arq);
}

void Grasp::newAresta(const string* str, char delim=','){
    stringstream ss(str);
    string tok;
    vector<string> vec;
    while (getline(ss, tok, delim)) {
        if (!tok.empty())
            vec.push_back(tok);
    }
    Vertice* p1 = new Vertice(Converter(vec[0]));
    Vertice* p2 = new Vertice(Converter(vec[1]));
    Aresta* A1 = new Aresta(p1, Converter(vec[2]), p2);
    vectorAresta.push_back(A1);
}

int Grasp::Converter(string str){
    istringstream iss(str);
    int retorno;
    iss >> retorno;
    return retorno;
}

void Grasp::Print(){
  for(int i = 0; i < vectorAresta.size(); i++){
    vectorAresta[i]->Print();
  }
}
