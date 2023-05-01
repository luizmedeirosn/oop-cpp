#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::ostream, std::istream;

class Array
{
  // cout << obj
  friend ostream &operator<<( ostream &, const Array &);

  // cin >> obj
  friend istream &operator>>( istream &, Array &);

	friend Array operator+(const Array &, const Array &);

	public:
		Array( int = 10 );    //construtor-padrão
		Array(const Array &); //construtor de cópia
		~Array();             //destrutor

		int getSize() const;

		
		const Array &operator=( const Array & ); //operador atribuição. "const Array &" evita algo como (a = b) = c

		bool operator==( const Array & ); //operador de igualdade

		bool operator!=( const Array &dir)
		{
			return !(*this == dir);
		}

		int &operator[](int); //permite modificar o elemento
		int operator[](int) const; //não permite modificar o elemento
		const Array &operator+=(const Array &);
		
	private:
		int tam;
		int *arr;
};

#endif