#include <iostream>
#include <ctime>
using namespace std;

#include "Retangulo.h"

int main() {
  cout << "Classe Retangulo:\n" << endl;
  cout << "r1...";
  Retangulo r1(10.5);
  r1.printMeasures();
  
  cout << "\nr2...";
  Retangulo r2(10.7, 7.3);
  r2.printMeasures();

  return 0;
}