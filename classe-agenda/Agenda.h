#ifndef AGENDA_H
#define AGENDA_H

#include <string>

#include "Pessoa.h"

class Agenda{
	public:
  	void armazenaPessoa(string nome, int idade, float altura);
  	void armazenaPessoa(const Pessoa &p);

  	void removePessoa(string nome);

  	int buscaPessoa(string nome) const; // informa em que posição da agenda está a pessoa
  	void imprimePovo() const; // imprime todos os dados de todas as pessoas da agenda
  	void imprimePessoa(int i) const; // imprime os dados da pessoa que está na posição 'i' da agenda
	
	private:
		int indice = 0;
  	Pessoa pessoas[10];
};
#endif