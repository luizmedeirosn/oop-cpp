#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional{
	public:
		Quadrado(double l) : FormaBidimensional(4), lado(l){}
		virtual ~Quadrado(){}

		virtual void desenhar() {
			cout << "-----" << endl;
			cout << "|   |" << endl;
			cout << "-----" << endl;
		}

		virtual double calcArea(){return lado * lado;}
		virtual double calcPerimetro(){return lado * 4;}

	private:
		double lado;
};

#endif