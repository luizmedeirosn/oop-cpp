#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include <string>
using std::string;

#include "Pessoa.h"

class PessoaFisica: public Pessoa{
	public:
		PessoaFisica(string, string, string ,string, string, string);
		virtual ~PessoaFisica(){}
		
		virtual PessoaFisica & setCpf(string);
		virtual PessoaFisica & setDataDeNascimento(string);
		virtual PessoaFisica & setEstadoCivil(string);

		inline string getCpf() const {return this->cpf;}
		inline string getDataDeNascimento() const {return this->dataDeNascimento;}
		inline string getEstadoCivil() const {return this->estadoCivil;}

		virtual void print();

	private:
		string cpf, dataDeNascimento, estadoCivil;
};
#endif