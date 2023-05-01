#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include <string>
using std::string;

#include "Pessoa.h"

class PessoaJuridica: public Pessoa{
	public:
		PessoaJuridica(string, string, string ,string, string, string);
		virtual ~PessoaJuridica(){}
		
		virtual PessoaJuridica & setCnpj(string);
		virtual PessoaJuridica & setInscricaoEstadual(string);
		virtual PessoaJuridica & setRazaoSocial(string);

		inline string getCnpj() const {return this->cnpj;}
		inline string getInscricaoEstadual() const {return this->inscricaoEstadual;}
		inline string getRazaoSocial() const {return this->razaoSocial;}

		virtual void print();

	private:
		string cnpj, inscricaoEstadual, razaoSocial;
};
#endif