#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include <string>
#include "Imovel.h"

class ImovelNovo: public Imovel{
	friend ostream &operator<<(ostream &out, const ImovelNovo &);
	
	public:
		ImovelNovo(string = "Desconhecido", float = 0.0, float = 1.5);
		ImovelNovo(const Imovel &, float = 1.5);
		
		ImovelNovo &setAdicional(float);
		inline float getAdicional(){return adicional;}
		inline float getPreço()const {return adicional * Imovel::getPreço();}
	
	private:
		float adicional;
};
#endif