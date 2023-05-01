#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#include "Conta.h"

Conta::~Conta(){
	st_transacao *aux = this->transacoes;
	while(aux){
		delete aux;
		aux = aux->prox;
	}
	cout << "Extrado da " << tipoDaConta << "||destruído||" << endl;
}

Conta &Conta::deposito(double valor){
	if(valor <= 0) cout << "/!\\ Valor do depósito nulo." <<endl;	
	else{
		time_t temp;
		time(&temp);

		st_transacao *transacao = new st_transacao;
		transacao->data = ctime(&temp);
		transacao->descricao = "depósito";
		transacao->tipo = "crétido";
		transacao->valor = valor;
		transacao->prox = nullptr;

		if(!this->transacoes)
			this->transacoes = transacao;
		
		else{
			st_transacao *aux1 = transacoes;
			st_transacao *aux2 = nullptr;
			while(aux1){
				aux2 = aux1;
				aux1 = aux1->prox;
			}
			aux2->prox = transacao;
		}
		
		this->saldo += valor;
	}
	
	return *this;
}

Conta &Conta::retirada(double valor){
	if(valor <= 0 || valor >= this->saldo) cout << "/!\\ Valor do saque fora do limite." <<endl;	
	else{
		time_t temp;
		time(&temp);

		st_transacao *transacao = new st_transacao;
		transacao->data = ctime(&temp);
		transacao->descricao = "saque";
		transacao->tipo = "débito";
		transacao->valor = valor;
		transacao->prox = nullptr;

		if(!this->transacoes)
			this->transacoes = transacao;
		
		else{
			st_transacao *aux1 = transacoes;
			st_transacao *aux2 = nullptr;
			while(aux1){
				aux2 = aux1;
				aux1 = aux1->prox;
			}
			aux2->prox = transacao;
		}
		
		this->saldo -= valor;
	}
	
	return *this;
}