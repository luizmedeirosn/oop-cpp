#include <iostream>
#include <string>
using namespace std;

#include "PessoaFisica.h"
#include "Funcionario.h"

ostream &operator<<(ostream &out, const Funcionario &f){
	out << "Nome-> " << f.nome << endl;
	out << "Cpf-> " << f.getCpf() << endl;
	out << "Matricula-> " << f.matricula << endl;
	out << "Salario-> " << f.salario << endl;
	out << "CargaHoraria-> " << f.cargaH << endl;
	out << "QtdHrsTrabalhadas-> " << f.qtdHrs << endl;
	out << "calculaSalarioBruto-> " << f.calculaSalarioBruto() << endl;
	return out;
}

Funcionario::Funcionario(string nome, string cpf, string m , float s, float c, float q): PessoaFisica(nome, cpf), matricula(m), salario(s), cargaH(c), qtdHrs(q){}

Funcionario &Funcionario::setMatricula(string m){
	this->matricula = m;
	return *this;
}

Funcionario &Funcionario::setSalario(float s){
	this->salario = s;
	return *this;
}

Funcionario &Funcionario::setCargaH(int c){
	this->cargaH = c;
	return *this;
}

Funcionario &Funcionario::setQtdHrs(int q){
	if(q > this->cargaH || q == 0) exit(1);
	
	this->qtdHrs = q;
	return *this;
}

float Funcionario::calculaSalarioBruto() const {
	return salario * (qtdHrs/cargaH);
}