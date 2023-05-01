#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente: public Conta{
	public:
		ContaCorrente(string cliente, double nmr, double saldo): Conta(cliente , nmr, saldo, "Conta corrente."){}
		virtual ~ContaCorrente(){}
		
		virtual Conta & extrato();
		
};
#endif