#ifndef __COR_HPP__
#define  __COR_HPP__

  #include "Include.hpp"

  class Cor{
  public:
    Cor(int identificador, float pesoMinimo, float pesoMaximo);
    void setCor(Cor* cor);
    void Print();
    friend class Grasp;
  private:
    int identificador;
    float pesoMinimo;
    float pesoMaximo;
  };

#endif //__COR_HPP__
