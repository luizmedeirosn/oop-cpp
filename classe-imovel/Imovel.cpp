#include <iostream>
using namespace std;
#include "Imovel.h"

ostream &operator<<(ostream &out, const Imovel &i){
	out << "\nEndereço: " << i.getEndereço() << "\nPreço: " << i.getPreço() << endl;
	return out;
}

Imovel::Imovel(string endereço, float preço): endereço(endereço), preço(preço){}

Imovel &Imovel::setEndereço(string endereço){
	this->endereço = endereço;
	return *this;
}

Imovel &Imovel::setPreço(float preço){
	this->preço = preço;
	return *this;
}