#include <stdio.h> 
#include <iostream>

#include "Pessoa.h"
#include "Agenda.h"

int main() {
	char linha[] = "---------------------------------------------\n";

	printf("Questões 8 e 9:\n");
	cout << linha;
	
  Pessoa p1("Bob", 53, 1.79);
	p1.print();
	printf("%s", linha);

	Agenda A;

	A.armazenaPessoa("Abel", 22, 1.78);
	A.armazenaPessoa(Pessoa("Tiago", 20, 1.80));
	A.imprimePovo();
	cout << linha;

	int posicao = A.buscaPessoa("Tiago");
	if (posicao > 0)
    	A.imprimePessoa(posicao);
	cout << linha;

	A.removePessoa("Tiago");
	A.imprimePovo();
	cout << linha;

  return 0;
}