#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
	friend Complex operator+(const Complex &, const Complex &);
	friend Complex operator-(const Complex &, const Complex &);
	
	public:
		Complex( int a = 0, int b = 0){
			real = a;
			imaginaria = b;
		}

		void soma(const Complex &);
		void sub(const Complex &);
		void print();

		const Complex &operator+=(const Complex &);
		const Complex &operator-=(const Complex &);
		Complex &operator++(); //préfixado
		Complex operator++(int); //pósfixado
		Complex &operator--();
		Complex operator--(int);

	private:
		double real;
		double imaginaria;
};

#endif