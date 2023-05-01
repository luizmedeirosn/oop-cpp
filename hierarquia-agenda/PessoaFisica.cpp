#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(string nome, string endereco, string email, string cpf, string dataDeNascimento, string estadoCivil): Pessoa(nome, endereco, email){
		this->setCpf(cpf);
		this->setDataDeNascimento(dataDeNascimento);
		this->setEstadoCivil(estadoCivil);
}

PessoaFisica & PessoaFisica::setCpf(string cpf){
	this->cpf = cpf;
	return *this;
}

PessoaFisica & PessoaFisica::setDataDeNascimento(string dataDeNascimento){
	this->dataDeNascimento = dataDeNascimento;
	return *this;
}

PessoaFisica & PessoaFisica::setEstadoCivil(string estadoCivil){
	this->estadoCivil = estadoCivil;
	return *this;
}

void PessoaFisica::print(){
	cout << "------------------------------" << endl;
	cout << "Nome-> " << getNome() << endl
	<< "Endereço-> " << getEndereco() << endl
	<< "Email-> " << getEmail() << endl
	<< "Cpf-> " << getCpf() << endl
	<< "DataDeNascimento-> " << getDataDeNascimento() << endl
	<< "EstadoCivil-> " << getEstadoCivil() << endl;
}