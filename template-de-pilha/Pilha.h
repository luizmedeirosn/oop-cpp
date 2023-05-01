#ifndef PILHA_H
#define PILHA_H 

#include <iostream> 
#include <stdexcept>
using std::ostream, std::endl, std::out_of_range;

template < class T >
class Pilha 
{
  friend ostream &operator<<(ostream &out, const Pilha<T> &obj)
  {
    out << "[";
    for (int i = 0 ; i < obj.pos ; i++)
      out << " " << obj.pPtr[i];
    out << " ]";
    return out;
  }
public:
  Pilha( int = 5 );
  ~Pilha();
  
  bool push(const T &);
  bool pop(T &);

  bool isEmpty() const { return pos == 0; }
  bool isFull() const { return pos == tam;}

private:
  T *pPtr;
  int pos, tam;
};

template < class T >
Pilha<T>::Pilha( int tam )
{
  this->tam = ( (tam > 0) ? tam : 5 );
  pos = 0;

  pPtr = new T[this->tam];
}

template < class T >
Pilha<T>::~Pilha()
{
  delete [] pPtr;
}

template < class T >
bool Pilha<T>::push(const T &el)
{
  if (isFull())
		throw out_of_range("/!\\ Pilha cheia, você deve dar pop primeiro.");

	else{
		pPtr[pos++] = el;
    return true;
	}
}

template < class T>
bool Pilha<T>::pop(T &el)
{
  if (isEmpty())
		throw out_of_range("/!\\ Pilha vazia, você deve dar push primeiro.");
    
	else{
		el = pPtr[pos -1];
		pos--;
    return true;
	}
}

#endif