#include <iostream>
using std::cerr, std::endl;

#include "Array.h"

ostream &operator<<(ostream &out , const Array & a)
{
  for (int i = 0 ; i < a.tam ; i++)
    out << a.arr[i] << " ";
  
  out << endl;

  return out;
}

istream &operator>>(istream &inp, Array & a)
{
  for (int i = 0 ; i < a.tam ; i++)
    inp >> a.arr[i];
  
  return inp;
}

Array::Array(int tam)
{
  this->tam = (tam > 0 ? tam : 10);

  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = 0;
}

Array::Array(const Array &obj) : tam(obj.tam)
{
  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = obj.arr[i];
}

Array::~Array()
{
  delete [] arr;
}

int Array::getSize() const
{
  return tam;
}

const Array &Array::operator=(const Array &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tam != obj.tam)
    {
      delete [] this->arr;
      this->tam = obj.tam;
      this->arr = new int[this->tam];
    }

    for (int i = 0 ; i < this->tam ; i++)
      arr[i] = obj.arr[i];

  }

  return *this;
}

bool Array::operator==(const Array &obj)
{
  if (this->tam != obj.tam)
    return false;

  for (int i = 0 ; i < this->tam ; i++)
    if (arr[i] != obj.arr[i])
      return false;
  
  return true;
}

int &Array::operator[](int i)
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

int Array::operator[](int i) const
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

Array operator+(const Array &n1, const Array &n2){
	Array aux;
	aux.tam = n1.tam + n2.tam;
	aux.arr = new int[n1.tam + n2.tam];

	for(int i = 0 ; i < n1.tam ; i++)
		aux[i] = n1.arr[i];

	int indice = n1.tam;
	for(int i = 0 ; i < n2.tam ; i++)
		aux[indice++] = n2.arr[i];

	return aux;
}

const Array &Array::operator+=(const Array &n){
	int *auxArr = new int[this->tam];
	int auxTam = this->tam;
	for(int i = 0 ; i < this->tam ; i++)
		auxArr[i] = this->arr[i];

	delete [] this->arr;
	this->arr = new int[this->tam + n.tam];
	this->tam += n.tam;

	for(int i = 0 ; i < auxTam ; i++)
		this->arr[i] = auxArr[i];

	int indice = auxTam;
	for(int i = 0 ; i < n.tam ; i++)
		this->arr[indice++] = n.arr[i];
	
	delete [] auxArr;
	return *this;
}