#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
	public:
  	Circulo(double r) : FormaBidimensional(99999), raio(r) {}
		virtual ~Circulo(){}

  	virtual void desenhar(){
			cout << "  _ " << endl;
			cout << "/   \\" << endl;
			cout << "\\   /" << endl;
			cout << "  ~ " << endl;
		}

		virtual double calcArea(){return 3.14 * (raio * raio);}
		virtual double calcPerimetro(){return 2 * 3.14 * raio;}

	private:
		double raio;
};
#endif