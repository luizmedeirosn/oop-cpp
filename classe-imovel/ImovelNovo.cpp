#include <string>
using namespace std;

#include "Imovel.h"
#include "ImovelNovo.h"

ostream &operator<<(ostream &out, const ImovelNovo &i){
		out << "\nEndereço: " << i.getEndereço() << "\nPreço: " << i.getPreço() << endl;
		return out;
}

ImovelNovo::ImovelNovo(string endereço, float preço, float adicional): Imovel(endereço, preço), adicional(adicional){}

ImovelNovo::ImovelNovo(const Imovel &i, float adicional): Imovel(i.getEndereço(), i.getPreço()), adicional(adicional){}

ImovelNovo &ImovelNovo::setAdicional(float adicional){
	this->adicional = adicional;
	return *this;
}