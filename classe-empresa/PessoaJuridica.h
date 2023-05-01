#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include <iostream>
#include <string>
using namespace std;

#include "Pessoa.h"

class PessoaJuridica: public Pessoa{
	
	public:
		PessoaJuridica(string nome = "Desconhecido", string cnpj = "Sem Cnpj", string razaoSocial = "Desconhecida"): Pessoa(nome), cnpj(cnpj), razaoSocial(razaoSocial){}

		PessoaJuridica &setCnpj(string cnpj);
		inline string getCnpj(){return cnpj;}

		PessoaJuridica &setRazaoSocial(string razaoSocial);
		inline string getRazaoSocial() const {return razaoSocial;}

	private:
		string cnpj;
		string razaoSocial;
};
#endif