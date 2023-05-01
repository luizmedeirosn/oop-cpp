#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
using namespace std;

#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

typedef struct no{
	Pessoa *pessoa;
	struct no *prox;
}st_no;

typedef struct lista{
	st_no *left; //Pessoa fisica
	st_no	*rigth; //Pessoa Juridica
}st_listaPessoas;

class Agenda{
	friend ostream &operator<<(ostream &, const Agenda &);
	
	public:
		Agenda();
		~Agenda();

		Agenda & append(const PessoaFisica &);
		Agenda & append(const PessoaJuridica &);
		
		Agenda & remove(const PessoaFisica &);
		Agenda & remove(const PessoaJuridica &);
		
		string verifyStr(string);
		void quest(string);
		void print() const;

		//sobrecarga
		const Agenda & operator+=(const PessoaFisica &);
		const Agenda & operator+=(const PessoaJuridica &);

		const Agenda & operator-=(const PessoaFisica &);
		const Agenda & operator-=(const PessoaJuridica &);

	private:
		st_listaPessoas *agenda;
};
#endif