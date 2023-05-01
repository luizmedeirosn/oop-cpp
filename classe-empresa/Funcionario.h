#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
using namespace std;

#include "PessoaFisica.h"

class Funcionario: public PessoaFisica{
	friend ostream &operator<<(ostream &, const Funcionario &);

	public:
	
		Funcionario(string = "Desconhecido", string = "Sem Cpf", string = "Sem matricula", float = 0.0, float = 0.0, float = 0.0);

		Funcionario &setMatricula(string);
		Funcionario &setSalario(float);
		Funcionario &setCargaH(int);
		Funcionario &setQtdHrs(int);

		inline string getMatricula(){return matricula;}
		inline float getSalario(){return salario;}
		inline int getCargaH(){return cargaH;}
		inline int getQtdHrs(){return qtdHrs;}

		float calculaSalarioBruto() const;

	private:
		string matricula;
		float salario;
		float cargaH;
		float qtdHrs;
};
#endif