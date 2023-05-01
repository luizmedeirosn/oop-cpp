#include <iostream>
#include <string>
using namespace std;

#include "Agenda.h"

ostream &operator<<(ostream &out, const Agenda &a){
	a.print();
  out << "";
  return out;
}

Agenda::Agenda(){
	st_listaPessoas *lista =  new st_listaPessoas;
	if(lista){
		lista->left = nullptr;
		lista->rigth = nullptr;
		this->agenda = lista;
	}
	else cout << "/!\\ Sem memória disponível!" << endl, exit(1);
}

Agenda::~Agenda(){
	st_no *aux1 = this-> agenda->left;
	st_no *aux2 = nullptr; 
	
	while(aux1){
		aux2 = aux1;
		aux1 = aux1->prox;
		delete aux2;
	}
	
	aux1 = this-> agenda->rigth;
	while(aux1){
		aux2 = aux1;
		aux1 = aux1->prox;
		delete aux2;
	}
	
	delete this->agenda;

	cout << "\nAgenda Destruída." << endl;
}

Agenda & Agenda::append(const PessoaFisica &p){
	PessoaFisica *pessoa = new PessoaFisica(p.getNome(), p.getEndereco(), p.getEmail(), p.getCpf(), p.getDataDeNascimento(), p.getEstadoCivil());
	
	st_no *no = new st_no;
	no->pessoa = pessoa;
	no->prox = nullptr;

	if(!this->agenda->left){
		this->agenda->left = no;
	}
	
	else{
		st_no *aux1 = this->agenda->left;
		st_no *aux2 = nullptr;
		
		while(aux1){
			aux2 = aux1;
			aux1 = aux1->prox;
		}
		aux2->prox = no;
	}

	return *this;
}

Agenda & Agenda::append(const PessoaJuridica &p){
	PessoaJuridica *pessoa = new PessoaJuridica(p.getNome(), p.getEndereco(), p.getEmail(), p.getCnpj(), p.getInscricaoEstadual(), p.getRazaoSocial());

	st_no *no = new st_no;
	no->pessoa = pessoa;
	no->prox = nullptr;

	if(!this->agenda->rigth){
		this->agenda->rigth = no;
	}
	else{
		st_no *aux1 = this->agenda->rigth;
		st_no *aux2 = nullptr;
		
		while(aux1){
			aux2 = aux1;
			aux1 = aux1->prox;
		}
		aux2->prox = no;
	}

	return *this;
}

Agenda & Agenda::remove(const PessoaFisica &p){
	if(!this->agenda->left) cout << "/!\\ A pessoa não existe na lista!" << endl, exit(1);
	else{
		st_no *aux1 = this->agenda->left;
		st_no *aux2 = nullptr;
		
		while(aux1){
			if(aux1->pessoa->getNome() == p.getNome()){
				
				if(aux1 == this->agenda->left) //inicio
					this->agenda->left = aux1->prox;
				
				else if(aux1->prox == nullptr)//fim
					aux2->prox = nullptr;
				
				else //meio
					aux2 = aux1->prox;
				
				delete aux1;
				return *this;
			}
			aux2 = aux1;
			aux1 = aux1->prox;
		}
	}
	return *this;
}	

Agenda & Agenda::remove(const PessoaJuridica &p){
	if(!this->agenda->rigth) cout << "/!\\ A pessoa não existe na lista!" << endl, exit(1);
	else{
		st_no *aux1 = this->agenda->rigth;
		st_no *aux2 = nullptr;
		
		while(aux1){
			if(aux1->pessoa->getNome() == p.getNome()){
				
				if(aux1 == this->agenda->rigth) //inicio
					this->agenda->rigth = aux1->prox;
				
				else if(aux1->prox == nullptr)//fim
					aux2->prox = nullptr;
				
				else //meio
					aux2 = aux1->prox;
				
				delete aux1;
				return *this;
			}
			aux2 = aux1;
			aux1 = aux1->prox;
		}
	}
	return *this;
}	

string Agenda::verifyStr(string s){
	//falta fazer tratamentos de erro, logo é necessário checar a quantidade de digitos dos argumentos de NOME CPF e CNPJ na hora de instanciar os objetos. Se o size das strings não baterem com as condições abaixo, o compilador irá anunciar "segmentation fault" 
	string str;
	if(s.size() == 14) str ="cpf";
	else if(s.size() == 18) str = "cnpj";
	else str = "nome"; //a fins de simplicidade, estou adimitindo que todos o tamanho de todos os nomes é diferente de 11 e 14.

	return str;
}

void Agenda::quest(string s){
	Pessoa *copia;
	string compara = this->verifyStr(s);
	
	if(compara == "cpf"){
		st_no *aux = this->agenda->left;
		while(aux){
			PessoaFisica *pessoaFisica = dynamic_cast <PessoaFisica *>(aux->pessoa);
			if(pessoaFisica->getCpf() == s) copia = pessoaFisica;
			aux = aux->prox;
		}
	}
	else if(compara == "cnpj"){
		st_no *aux = this->agenda->rigth;
		while(aux){
			PessoaJuridica *pessoaJuridica = dynamic_cast <PessoaJuridica *>(aux->pessoa); //Downcast de ponteiro de classe básica para ponteiro de classe derivada, visto que é necessário fazer o uso dos métodos da classe derivada.
			if(pessoaJuridica->getCnpj() == s) copia = pessoaJuridica;
			aux = aux->prox;
		}
	}
	else{
		st_no *aux = this-> agenda->left;
		while(aux){
			if(aux->pessoa->getNome() == s)
				copia = aux->pessoa;
			aux = aux->prox;
		}
		aux = this-> agenda->rigth;
		while(aux){
			if(aux->pessoa->getNome() == s)
				copia = aux->pessoa;
			aux = aux->prox;
		}
	}
	copia->print();
}

void Agenda::print()const{
	cout << "\nMembros da Agenda:" << endl;
	st_no *aux = this-> agenda->left;
	while(aux){
		aux->pessoa->print(); //aqui acontece polimorfismo 
		aux = aux->prox;
	}
	
	aux = this-> agenda->rigth;
	while(aux){
		aux->pessoa->print();
		aux = aux->prox;
	}
}

const Agenda & Agenda::operator+=(const PessoaFisica &p){
	this->append(p);
	return *this;
}

const Agenda & Agenda::operator+=(const PessoaJuridica &p){
	this->append(p);
	return *this;
}

const Agenda & Agenda::operator-=(const PessoaFisica &p){
	this->remove(p);
	return *this;
}

const Agenda & Agenda::operator-=(const PessoaJuridica &p){
	this->remove(p);
	return *this;
}