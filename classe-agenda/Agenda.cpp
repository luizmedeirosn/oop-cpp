#include <string>
#include <cstdio>
#include <iostream>

#include "Pessoa.h"
#include "Agenda.h"

void Agenda::armazenaPessoa(string nome, int idade, float altura){
	if(indice < 10){
		pessoas[indice] = Pessoa(nome, idade, altura);
		indice++;
	}
	else printf("Não é possível adicionar mais pessoas à agenda!");
}

void Agenda::armazenaPessoa(const Pessoa &p){
	if(indice < 10){
		pessoas[indice] = p;
		indice++;
	}
	else printf("Não é possível adicionar mais pessoas à agenda!");
}

int Agenda::buscaPessoa(string nome) const{
	int ind = 0;
	for(auto &p : pessoas){
		if(p.getNome() == nome) return ind;
		ind++;
	}
	return -1;
}

void Agenda::removePessoa(string nome){
	//cout << buscaPessoa(nome) << endl;
	if(buscaPessoa(nome) != -1){
		for(int i = buscaPessoa(nome); i < indice -1; i++)
			pessoas[i] = pessoas[i+1];
	}
	printf("%s foi removido!\n", nome.c_str());
	indice--;
}

void Agenda::imprimePovo() const{
	if(indice >= 0){
		printf("Pessoas na Agenda:\n");
		for(int i = 0; i < indice; i++) pessoas[i].print();
	}
	else printf("Agenda Vazia!");
}

void Agenda::imprimePessoa(int i) const{
	pessoas[i].print();
}