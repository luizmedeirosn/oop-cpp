#include <iostream>
#include <string>
using std::string;

#include "Data.h"

Data::Data(int a, int b, int c){
  setDia(a); 
  setMes(b); 
  setAno(c);
}

void Data::setDia(int nmr){
  dia = nmr;
}

int Data::getDia(){
  return dia;
}

void Data::setMes(int nmr){
  (nmr > 12 or nmr < 1) ? mes = 1 : mes = nmr;
}

int Data::getMes(){
  return mes;
}

void Data::setAno(int nmr){
  ano = nmr;
}

int Data::getAno(){
  return ano;
}

void Data::mostrarData(){
  std::cout << getDia() << '/' << getMes() << '/' << getAno() << std::endl;
}