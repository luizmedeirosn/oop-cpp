#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional{
	public:
		Triangulo(double b, double a) : FormaBidimensional(3), base(b), altura(a) {}
		virtual ~Triangulo(){}

		virtual void desenhar() {
			cout << "  .   " << endl;
			cout << " / \\ " << endl;
			cout << "/   \\" << endl;
			cout << "~~~~~ " << endl;
		}

		virtual double calcArea(){return (base * altura) / 2.0;}
		virtual double calcPerimetro(){return (altura * 2) + base;}

	private:
		double base, altura;
};

#endif