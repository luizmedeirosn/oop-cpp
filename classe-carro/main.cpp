#include <iostream>
#include <cctype> 
#include <string> 
using namespace std;

#include "Carro.h"

int main() {
  cout << "\nTeste Carro:\n\n";
  Carro carroTeste1("",2000);
  carroTeste1.displayMessage();

  Carro carroTeste2("Chevrolet",1967);
  carroTeste2.displayMessage();

  return 0;
}
