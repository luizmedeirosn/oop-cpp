#include <iostream>
#include <string>
using namespace std;

#include "Empresa.h"

void linha(){ cout << "--------------------------------\n";}

int main() {

	//TesteClasse Pessoa
	cout <<"\nPessoa..." << endl;
	Pessoa p1;
	cout << p1;
	p1.setNome("Bob");
	cout << p1;

	//TesteClasse PessoaFísica
	cout <<"\nPessoa Fisica..." << endl;
	PessoaFisica pf1;
	pf1.setNome("Ana");
	pf1.setCpf("147-887-645-17");
	cout << pf1;
	cout << "Cpf-> " <<pf1.getCpf() << endl;

	//TesteClasse PessoaJurídica
	cout <<"\nPessoa Juridica..." << endl;
	PessoaJuridica pj1;
	cout << pj1;
	pj1.setNome("Jack");
	pj1.setCnpj("26166877000140").setRazaoSocial("DataSul");
	cout << pj1;
	cout << "Cnpj-> " << pj1.getCnpj() << "\nRazãoSocial-> " << pj1.getRazaoSocial() << endl << endl;
	linha();
	linha();

	//TesteClasse Funcionário
	cout << "\nClasseFuncionario..." << endl;
	Funcionario f1("Olivia", "551.289.330-08", "092", 3347.94, 120, 120); 
	Funcionario f2;
	f2.setNome("Robin");
	f2.setCpf("288.777.190-60");
	f2.setMatricula("093").setSalario(2250.49).setCargaH(100).setQtdHrs(80);
	cout << f1 << endl << f2 << endl;
	linha();
	linha();

	//TesteClasse Cliente
	cout << "\nClasseCliente..." << endl;
	Cliente c1, c2;
	c2.setNome("Ragnar");
	c2.setCpf("657.094.730-30");
	c2.setTelefone("55 83 99746-4017");
	c2.setEndereço("Dinamérica");
	cout << c1 << endl << c2 << endl;
	linha();
	linha();

	//TesteClasse Empresa
	cout << "\nClasseEmpresa..." << endl;
	Empresa empresa; //O default para tamanho das listas está como 2.
	empresa.addFuncionario(f1).addFuncionario(f2).addCliente(c1).addCliente(c2);
	empresa.printClientes();
	empresa.printFuncionarios();

  return 0;
}