#ifndef GATO_H
#define GATO_H

#include <string>
using namespace std;

#include "Animal.h"

class Gato: public Animal{
	public:
		Gato(string nome = "Desconhecido", string raça = "Desconhecida"): Animal(nome,raça){}
		
		inline string mia(){string info = "O gato da raça " + caminha() + " está miando... MiaUMiAu!!!\n"; return info;}
};

#endif