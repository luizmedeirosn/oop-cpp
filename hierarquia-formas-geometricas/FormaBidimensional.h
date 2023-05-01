#ifndef FORMABI_H
#define FORMABI_H 

//classe abstrata

class FormaBidimensional {
	public:
		FormaBidimensional(int numLados) : numLados(numLados) {}
		virtual ~FormaBidimensional(){}

		//método virtual puro
		virtual void desenhar() = 0;
		virtual double calcArea() = 0;
		virtual double calcPerimetro() = 0;

	private:
		int numLados;
	};

#endif