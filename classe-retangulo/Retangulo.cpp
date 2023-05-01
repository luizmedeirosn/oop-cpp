#include <iostream>
#include <iomanip>
using namespace std;

#include "Retangulo.h"

Retangulo::Retangulo(double a, double l)
{
  setAltura(a);
  setLargura(l);
}

void Retangulo::setAltura(double a)
{
  altura = (a > 0.0 && a < 20.0) ? a : 1.0;
}

void Retangulo::setLargura(double l)
{
  largura = (l > 0.0 && l < 20.0) ? l : 1.0;
}

void Retangulo::printMeasures()
{
  cout << setprecision(4) << showpoint << "\nAltura-> " << altura << "\nLargura-> " << largura << "\nPerímetro-> " << perimetro() << "\nÁrea-> "  << area() << endl;
}