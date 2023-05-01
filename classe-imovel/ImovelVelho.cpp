#include <string>
using namespace std;

#include "Imovel.h"
#include "ImovelVelho.h"

ostream &operator<<(ostream &out, const ImovelVelho &i){
		out << "\nEndereço: " << i.getEndereço() << "\nPreço: " << i.getPreço() << endl;
		return out;
}

ImovelVelho::ImovelVelho(string endereço, float preço, float desconto): Imovel(endereço, preço), desconto(desconto){}

ImovelVelho::ImovelVelho(const Imovel &i, float desconto): Imovel(i.getEndereço(), i.getPreço()), desconto(desconto){}

ImovelVelho &ImovelVelho::setDesconto(float desconto){
	this->desconto= desconto;
	return *this;
}