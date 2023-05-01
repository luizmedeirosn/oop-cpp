#include <iostream>
using std::cout, std::endl;

#include "Complex.h"

Complex operator+(const Complex &n1, const Complex &n2){
	Complex aux;
	aux.real = n1.real + n2.real;
	aux.imaginaria = n1.imaginaria + n2.imaginaria;
	return aux;
}

Complex operator-(const Complex &n1, const Complex &n2){
	Complex aux;
	aux.real = n1.real - n2.real;
	aux.imaginaria = n1.imaginaria - n2.imaginaria;
	return aux;
}

const Complex &Complex::operator+=(const Complex &n){
	this->soma(n);
	return *this;
}

const Complex &Complex::operator-=(const Complex &n){
	this->sub(n);
	return *this;
}

Complex &Complex::operator++(){
	this->soma(1);
	return *this;
}

Complex Complex::operator++(int){
	Complex aux = *this;
	this->soma(1);
	return *this;
}

Complex &Complex::operator--(){
	this->sub(1);
	return *this;
}

Complex Complex::operator--(int){
	Complex aux = *this;
	this->sub(1);
	return *this;
}

void Complex::soma(const Complex &c){
  real += c.real;
  imaginaria += c.imaginaria;
}

void Complex::sub(const Complex &c){
  real -= c.real;
  imaginaria -= c.imaginaria;
}

void Complex::print(){
  cout << real << (imaginaria >= 0 ? " +" : " ") << imaginaria << "*i" << endl;
}