#ifndef	CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"

class ContaPoupanca: public Conta{
	public:
		ContaPoupanca(string cliente, double nmr, double saldo, int diaAniversario): Conta(cliente , nmr, saldo, "Conta poupança."), diaAniversario(diaAniversario){}
		virtual ~ContaPoupanca(){}

		virtual Conta & extrato();

	private:
		int diaAniversario;
};

#endif