#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include <string>
using namespace std;

class Imovel{
	friend ostream &operator<<(ostream &out, const Imovel &);

	public:
		Imovel(string = "Desconhecido", float = 0.0);
		
		Imovel &setEndereço(string endereço);
		inline string getEndereço() const{return endereço;}
		
		Imovel &setPreço(float preço);
		inline float getPreço() const{return preço;}

	private:
		string endereço;
		float preço;
};
#endif