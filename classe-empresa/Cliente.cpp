#include <iostream>
#include <string>
using namespace std;

#include "PessoaFisica.h"
#include "Cliente.h"

ostream &operator<<(ostream &out, const Cliente &f){
	out << "Nome-> " << f.nome << endl;
	out << "Cpf-> " << f.getCpf() << endl;
	out << "Telefone -> " << f.telefone << endl;
	out << "Endereço-> " << f.endereço << endl;
	return out;
}

Cliente &Cliente::setTelefone(string t){
	this->telefone = t;
	return *this;
}

Cliente &Cliente::setEndereço(string e){
	this->endereço = e;
	return *this;
}