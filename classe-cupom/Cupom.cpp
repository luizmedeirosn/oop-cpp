#include <iostream>
#include <string>
using namespace std;

#include "Cupom.h"

Cupom::Cupom(string s1, string s2, int quantidade, double valor){
    setID(s1);
    setDescriçao(s2);
    setQuantidade(quantidade);
    setPreço(valor);
}

void Cupom::setID(string s1){
    s1 == "" ? id = "Sem ID" : id = s1;
}

string Cupom::getID(){
    return id;
}

void Cupom::setDescriçao(string s2){
    s2 == "" ? descriçao = "Sem descriçao" : descriçao = s2;
}

string Cupom::getDescriçao(){
    return descriçao;
}

void Cupom::setQuantidade(int quantidade){
    quantidade < 0? qtd = 0 : qtd = quantidade;
}

int Cupom::getQuantidade(){
    return qtd;
}

void Cupom::setPreço(double valor){
  valor < 0? preço = 0 : preço = valor;
}

double Cupom::getPreço(){
    return preço;
}

double Cupom::calculaCupom(){
    return (qtd * preço);
}

void Cupom::readCupom(){
  cout << "ID-> " << id << "\nDescrição-> " << descriçao << "\nQuantidade-> " << qtd << "\nPreço-> " << preço << "\nValor do Cupom-> " <<  calculaCupom() << endl;
}