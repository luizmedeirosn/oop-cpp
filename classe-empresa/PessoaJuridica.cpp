#include <iostream>
#include <string>
using namespace std;

#include "PessoaJuridica.h"

PessoaJuridica &PessoaJuridica::setCnpj(string cnpj){
	this->cnpj = cnpj;
	return *this;
}

PessoaJuridica &PessoaJuridica::setRazaoSocial(string razaoSocial){
	this->razaoSocial = razaoSocial;
	return *this;
}