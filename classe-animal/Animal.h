#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal{
	public:
		Animal(std::string nome = "Desconhecido", std::string raça = "Desconhecida"): nome(nome), raça(raça){}
		
		inline std::string caminha(){cout << "O animal " + nome + " caminhou alguns metros...\n"; return raça;}
	
	private:
		std::string nome;
		std::string raça;
};
#endif