#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include <iostream>
#include <string>
using namespace std;

#include "Pessoa.h"

class PessoaFisica: public Pessoa{
	
	public:
		PessoaFisica(string nome = "Desconhecido",string cpf = "Sem Cpf"): Pessoa(nome),cpf(cpf){}

		PessoaFisica &setCpf(string);
		inline string getCpf() const {return cpf;}

	private:
		string cpf;
};
#endif