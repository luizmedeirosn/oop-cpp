#ifndef PESSOA_H
#define	PESSOA_H

#include <string>

class Pessoa{
	public:
		Pessoa(string, string, string);
		virtual ~Pessoa(){}

		virtual Pessoa & setNome(string);
		virtual Pessoa & setEndereco(string);
		virtual Pessoa & setEmail(string);

		inline string getNome() const {return this->nome;}
		inline string getEndereco() const {return this->endereco;}
		inline string getEmail() const {return this->email;}

		virtual void print() = 0; //torna a classe abstrata e obrigada as classes derivadas a implementarem esse método.
		
	private:
		string nome, endereco, email;
};
#endif