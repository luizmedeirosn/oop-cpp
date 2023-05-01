#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(string nome, string endereco, string email, string cnpj, string inscricaoEstadual, string razaoSocial): Pessoa(nome, endereco, email){
		this->setCnpj(cnpj);
		this->setInscricaoEstadual(inscricaoEstadual);
		this->setRazaoSocial(razaoSocial);
}

PessoaJuridica & PessoaJuridica::setCnpj(string cnpj){
	this->cnpj = cnpj;
	return *this;
}

PessoaJuridica & PessoaJuridica::setInscricaoEstadual(string inscricaoEstadual){
	this->inscricaoEstadual = inscricaoEstadual;
	return *this;
}

PessoaJuridica & PessoaJuridica::setRazaoSocial(string razaoSocial){
	this->razaoSocial = razaoSocial;
	return *this;
}

void PessoaJuridica::print(){
	cout << "------------------------------" << endl;
	cout << "Nome-> " << getNome() << endl
	<< "Endereço-> " << getEndereco() << endl
	<< "Email-> " << getEmail() << endl
	<< "Cnpj-> " << getCnpj() << endl
	<< "InscriçãoEstadual-> " << getInscricaoEstadual() << endl
	<< "RazãoSocial-> " << getRazaoSocial() << endl;
}