#include <iostream>
#include <string>
using std::string;

#include "Empregado.h"

Empregado::Empregado(string s1, string s2, double valor){
  nome = s1;
  sobrenome = s2;
  salarioMensal = valor;
}

void Empregado::setNome(string nome1){
  nome = nome1;
}
string Empregado::getNome(){
  return nome;
}

void Empregado::setSobrenome(string nome2){
  sobrenome = nome2;
}

string Empregado::getSobrenome(){
  return sobrenome;
}

void Empregado::setSalario(int valor){
  salarioMensal = valor;
}

double Empregado::getSalario(){
  return salarioMensal;
}

void Empregado::aumento(double porcentagem){
  salarioMensal = salarioMensal + (salarioMensal * (porcentagem / 100));
}

void Empregado::identifica(){
  std::cout << "\nNome -> " << getNome() << "\nSobrenome -> " << getSobrenome() << "\nSalário Mensal -> " << getSalario() << std::endl;
}