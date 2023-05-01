#include <iostream>
#include <string>
using namespace std;

#include "Pessoa.h"

ostream &operator<<(ostream &out, const Pessoa &p){
		out << "Nome-> " << p.nome << endl;
		return out;
}

Pessoa &Pessoa::setNome(string nome){
	this->nome = nome;
	return *this;
}