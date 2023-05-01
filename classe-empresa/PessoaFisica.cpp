#include <iostream>
#include <string>
using namespace std;

#include "PessoaFisica.h"

PessoaFisica &PessoaFisica::setCpf(string cpf){
	this->cpf = cpf;
	return *this;
}
