#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using namespace std;

class Pessoa{
	friend ostream &operator<<(ostream &, const Pessoa &);
	
	public:
		Pessoa(string nome = "Desconhecido"): nome(nome){}

		Pessoa &setNome(string);
		inline string getNome() const {return nome;}

	protected:
		string nome;
};
#endif