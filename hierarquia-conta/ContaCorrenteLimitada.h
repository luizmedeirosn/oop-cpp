#ifndef	CONTACORRENTELIMITADA_H
#define CONTACORRENTELIMITADA_H

#include "Conta.h"

class ContaCorrenteLimitada: public Conta{
	public:
		ContaCorrenteLimitada(string cliente, double nmr, double saldo, double limite): Conta(cliente , nmr, saldo, "Conta corrente com limite."), limite(limite){}
		virtual ~ContaCorrenteLimitada(){}

		virtual Conta &retirada(double valor);
		virtual Conta & extrato();

	private:
		double limite;
};

#endif