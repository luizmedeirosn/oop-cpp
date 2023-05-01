#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
using namespace std;

#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"

class Empresa: public PessoaJuridica{
	
	public:
		Empresa(int = 2);
		~Empresa();

		Empresa &addFuncionario(const Funcionario &);
		Empresa &addCliente(const Cliente &);

		void printFuncionarios();
		void printClientes();
	
	private:
		int tamF = 0;
		int tamC = 0;
		int tamMax;
		Funcionario *funcionarios;
		Cliente *clientes;
};
#endif