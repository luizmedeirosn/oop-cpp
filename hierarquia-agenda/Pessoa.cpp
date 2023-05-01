#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#include "Pessoa.h"

Pessoa::Pessoa(string nome, string endereco, string email){
		this->setNome(nome);
		this->setEndereco(endereco);
		this->setEmail(email);
}

Pessoa & Pessoa::setNome(string nome){
	for(auto &a : nome)
		if(isdigit(a) || ispunct(a)) cout << "/!\\ Erro, Nome Inválido!" << endl, exit(1);
	this->nome = nome;
	return *this;

}

Pessoa & Pessoa::setEndereco(string endereco){
	this->endereco = endereco;
	return *this;
}

Pessoa & Pessoa::setEmail(string email){
	this->email = email;
	return *this;
}