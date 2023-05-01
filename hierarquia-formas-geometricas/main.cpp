#include <iostream>

#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"

int main(){
  
	FormaBidimensional *formas[] = {new Quadrado(2), new Circulo(3), new Triangulo(3,4)};

  for (int i = 0 ; i < 3 ; i++)
  {
    formas[i]->desenhar();
		cout <<"Área-> " << formas[i]->calcArea();
		cout << "\nPerímetro-> " << formas[i]->calcPerimetro() << endl << endl;
    delete formas[i];
  }

  return 0;
}