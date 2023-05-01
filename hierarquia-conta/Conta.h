#ifndef CONTA_H
#define CONTA_H 

#include <string>
using std::string;

typedef struct transacao{
	string data, descricao, tipo;
	double valor;
	struct transacao *prox;
}st_transacao;

class Conta{
	public:
		Conta(string cliente, double nmr, double saldo, string tipoDaConta): cliente(cliente), nmr(nmr), saldo(saldo), tipoDaConta(tipoDaConta){}
		
		//destrutor, desalocando tudo, não tenho certeza se é pra fazer apenas isso.
		virtual ~Conta();

		virtual Conta & deposito(double);
		virtual Conta & retirada(double);
		virtual Conta & extrato() = 0;

		inline string getTipo()const{return tipoDaConta;}

	protected:
		string cliente, tipoDaConta;
		double nmr, saldo;
		st_transacao *transacoes = nullptr;
	};

#endif