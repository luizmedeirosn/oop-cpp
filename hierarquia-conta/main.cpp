#include <iostream>
using namespace std;

#include "ContaCorrente.h"
#include "ContaCorrenteLimitada.h"
#include "ContaPoupanca.h"

int main(){
  Conta *contas[] = {new ContaCorrente("Luiz", 1, 500), new ContaCorrenteLimitada("Medeiros", 2, 750, 200), new ContaPoupanca("Neto", 3, 1000, 1)};

	contas[0]->deposito(200).deposito(300).retirada(400).extrato();contas[0]->deposito(-3).retirada(0); //depósito e retirada com valores nulos.
	
	cout << endl << "-----------------------------------------------------" << endl << "-----------------------------------------------------" << endl<< "-----------------------------------------------------" << endl << endl;

	contas[1]->deposito(-3).retirada(0);//depósito e retirada com valores nulos.
	contas[1]->deposito(250).retirada(500).extrato();
	contas[1]->retirada(400); //retirada foda do limite da conta.

	cout << endl << "-----------------------------------------------------" << endl << "-----------------------------------------------------" << endl<< "-----------------------------------------------------" << endl;

	contas[2]->deposito(250).retirada(500).retirada(400).extrato();
	
	//desalocando os objetos
	for (int i = 0 ; i < 3 ; i++){
		cout << contas[i]->getTipo() << "||destruído||" << endl;
		delete contas[i];
		cout << endl;
	}
	return 0;
}