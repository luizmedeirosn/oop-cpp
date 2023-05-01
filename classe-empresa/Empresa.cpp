#include <iostream>
#include <string>
using namespace std;

#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"
#include "Empresa.h"


Empresa::Empresa(int tamMax): tamMax(tamMax){
	funcionarios = new Funcionario[this->tamMax];
	clientes = new Cliente[this->tamMax];
}

Empresa::~Empresa(){
	delete [] this->funcionarios;
	delete [] this->clientes;
}

Empresa &Empresa::addFuncionario(const Funcionario &f){
	if(this->tamF < this->tamMax){
		funcionarios[tamF] = f;
		this->tamF++;
	}
	else cout << "ListaCheia!" << endl;
	return *this;
}

Empresa &Empresa::addCliente(const Cliente &c){
	if(this->tamC < this->tamMax){
		clientes[tamC] = c;
		this->tamC++;
	}
	else cout << "ListaCheia!" << endl;
	return *this;
}

void Empresa::printFuncionarios(){
	cout << "\nFuncionários..." << endl;
	for(int i = 0 ; i < this->tamF ; i++)
		cout << this->funcionarios[i] << endl;
}

void Empresa::printClientes(){
	cout << "\nClientes..." << endl;
	for(int i = 0 ; i < this->tamC ; i++)
		cout << this->clientes[i] << endl;
}