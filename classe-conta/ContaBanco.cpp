#include <iostream>
#include "ContaBanco.h"
using namespace std;

ContaBanco::ContaBanco(double saldoInicial){
  saldoInicial < 0? saldoAtual = 0 : saldoAtual = saldoInicial;
}

void ContaBanco::creditar(double valor){
  saldoAtual += valor;
}

void ContaBanco::debitar(double valor){
  if(valor > saldoAtual) cout << "Débito não realizado! Seu saldo é menor que o valor informado!" << endl;
  else saldoAtual -= valor;
}

double ContaBanco::getSaldo(){
  return saldoAtual;
}