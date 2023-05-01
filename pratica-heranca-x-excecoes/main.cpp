#include <iostream>
using std::cout, std::endl, std::cin;
using std::cerr;

#include "TempoZero.h"
#include "TempoNegativo.h"
#include "TempoMaiorQueCem.h"

double velocidade(double d, double t)
{
  if (t == 0)
    throw TempoZero(); //lança erro, mas não trata
	else if(t < 0)
		throw TempoNegativo();
	else if(t > 100)
		throw TempoMaiorQueCem();
	else
  	return d/t;
}

int main() {
  double vel, dist, tempo;
  int obj = 1;

  cout << "Calculando a velocidade de 2 objetos: " << endl;

  while (obj <= 2)
  {
    cout << "Objeto " << obj << ": " << endl;
    cout << " Distancia (m): ";
    cin >> dist;
    cout << " Tempo (s): ";
    cin >> tempo;

    //estamos conscientes de que velocidade pode lançar erros/exceções, todas as funçoes que podem gerar erro devem ficar no escopo do try.
    try
    {
      vel = velocidade(dist,tempo);
      cout << " Velocidade " << vel << " m/s" << endl;
    }
    catch(std::runtime_error &e) //capturando a exceção
    {
      cerr << e.what() << endl; //aviso do problema, o what() usa o argumento default das classes derivadas
      obj--; //tratando para que o programa possa continuar rodando
    }
    
    obj++;
  }

  return 0;
}