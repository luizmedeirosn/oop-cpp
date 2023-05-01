#include <iostream>
#include <ctime>
using namespace std;

#include "ContaCorrenteLimitada.h"

Conta & ContaCorrenteLimitada::retirada(double valor){
			if(saldo - valor >= limite && valor > 0){
			
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
				
				saldo -= valor;
			}
			else cout << "/!\\ Valor do saque fora do limite." << endl;
			
			return *this;
}

Conta & ContaCorrenteLimitada::extrato(){
			cout << "\nTipoDaConta-> " << tipoDaConta;
			cout << "\nNmrDaConta-> " << nmr << "\nNomeDoCliente-> " << cliente << "\nValorDoLimite-> " << limite << "\nSaldoDaConta-> " << saldo << endl;
			
			cout << "\nExtrato:" << endl;
			st_transacao *aux = transacoes;
			while(aux){
				cout << "----------------------" <<endl;
				cout << "Tipo-> " << aux->tipo << "\nData-> " << aux->data << "Valor-> " << aux-> valor << "\nDescrição-> " << aux->descricao << endl;
				aux = aux->prox;
			}
			cout << endl;

			return *this;
}