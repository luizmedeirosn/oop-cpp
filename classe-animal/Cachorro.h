#ifndef CACHORRO_H
#define CACHORRO_H

#include <string>
using namespace std;

#include "Animal.h"

class Cachorro: public Animal{
	public:
		Cachorro(string nome = "Desconhecido", string raça = "Desconhecida"): Animal(nome,raça){}
		
		inline string late(){string info = "O cachorro da raça " + caminha() + " está latindo... AuAUAu!!!\n"; return info;}
};

#endif