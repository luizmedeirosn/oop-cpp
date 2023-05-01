#include <iostream>
using std::cout, std::endl;

#include "Carro.h"

Carro::Carro(string nome, int ano){
  setMarca(nome);
  setAno(ano);
}

void Carro::setMarca(string nome){
  if (nome == "")
    marca = "\"Sem Marca\"";
  else if (nome.length() > 10)
    marca = nome.substr(0,10);
  else
    marca = nome;
}

string Carro::getMarca(){
  return marca;
}

void Carro::setAno(int ano){
  ano < 0? anoCarro = 0 : anoCarro = ano; 
}

int Carro::getAno(){
  return anoCarro;
}

void Carro::displayMessage(){
  std::cout << "Olá, eu sou um carro da marca " << getMarca() << " e do ano " << getAno() << endl;
}
