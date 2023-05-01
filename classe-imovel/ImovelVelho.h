#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H

#include <string>
#include "Imovel.h"

class ImovelVelho: public Imovel{
	friend ostream &operator<<(ostream &out, const ImovelVelho &);
	
	public:
		ImovelVelho(string = "Desconhecido", float = 0.0, float = 0.7);
		ImovelVelho(const Imovel &, float = 0.7);
		
		ImovelVelho &setDesconto(float);
		inline float getDesconto(){return desconto;}
		inline float getPreço()const {return desconto * Imovel::getPreço();}
	
	private:
		float desconto;
};
#endif