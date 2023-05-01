#include <iostream>
using namespace std;

#include "ContaCorrente.h"

Conta & ContaCorrente::extrato(){
			cout << "\nTipoDaConta-> " << tipoDaConta;
			cout << "\nNmrDaConta-> " << nmr << "\nNomeDoCliente-> " << cliente << "\nSaldoDaConta-> " << saldo << endl;
			
			cout << "\nExtrato:" << endl;
			st_transacao *aux = transacoes;
			while(aux){
				cout << "----------------------" <<endl;
				cout << "Tipo-> " << aux->tipo << "\nData-> " << aux->data << "Valor-> " << aux-> valor << "\nDescrição-> " << aux->descricao << endl ;
				aux = aux->prox;
			}
			cout << endl;

			return *this;
}