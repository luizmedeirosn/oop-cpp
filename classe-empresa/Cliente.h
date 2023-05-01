#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
using namespace std;

#include "PessoaFisica.h"

class Cliente: public PessoaFisica{
	friend ostream &operator<<(ostream &, const Cliente &);

	public:
		Cliente(string n = "Desconhecido", string c = "Sem Cpf", string t = "Sem Telefone", string e = "Desconhecido"): PessoaFisica(n, c), telefone(t), endereço(e){};

		Cliente &setTelefone(string);
		Cliente &setEndereço(string);

		inline string getTelefone() const {return telefone;}
		inline string getEndereço()const {return endereço;}

	private:
		string telefone;
		string endereço;
};
#endif
