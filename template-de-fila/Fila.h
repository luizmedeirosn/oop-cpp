#ifndef FILA_H
#define FILA_H 

#include <iostream> 
#include <stdexcept>
using std::ostream, std::endl, std::out_of_range;

template < class T >
class Fila 
{
  //função friend amiga apenas do correspondente
  friend ostream &operator<<(ostream &out, const Fila<T> &obj)
  {
    out << "[";
    for (int i = 0 ; i < obj.pos ; i++)
      out << " " << obj.pPtr[i];
    out << " ]";
    return out;
  }
public:
  Fila( int = 5 );
  ~Fila();
  
  bool enqueue(const T &);
  bool dequeue(T &);

  bool isEmpty() const { return pos == 0; }
  bool isFull() const { return pos == tam;}
private:
  T *pPtr;
  int pos, tam;
};

template < class T >
Fila<T>::Fila( int tam )
{
  this->tam = ( (tam > 0) ? tam : 5 );
  pos = 0;

  pPtr = new T[this->tam];
}

template < class T >
Fila<T>::~Fila()
{
  delete [] pPtr;
}

template < class T >
bool Fila<T>::enqueue(const T &el)
{
  if (isFull())
		throw out_of_range("/!\\ Fila cheia, você deve dar dequeue primeiro.");

	else{
		pPtr[pos++] = el;
    return true;
	}
}

template < class T>
bool Fila<T>::dequeue(T &el)
{
  if (isEmpty())
		throw out_of_range("/!\\ Fila vazia, você deve dar enqueue primeiro.");
    
	else{
		el = pPtr[0];
		for(int i = 0 ; i < pos - 1 ; i++)
			pPtr[i] = pPtr[i+1];
		pos--;
    return true;
	}
}

#endif