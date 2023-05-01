#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <stdio.h>
using namespace std;

class Pessoa{
	public:
		Pessoa(string s = "", int num1 = 0, double num2 = 0.0): 
		nome(s), idade(num1), altura(num2){};

		//metodos set
		inline void setNome(string s){nome = s;}
		inline void setIdade(int num1){idade = num1;}
		inline void setAltura(double num2){altura = num2;}

		//metodos get
		inline string getNome() const {return nome;}
		inline int getIdade() const {return idade;}
		inline double getAltura() const {return altura;}

		//outros métodos
		inline void print() const {
			printf("\nNome-> %s\nIdade-> %d\nAltura-> %.2f\n",nome.c_str(), idade, altura);}

	private:
		string nome;
		int idade;
		double altura; 
};
#endif