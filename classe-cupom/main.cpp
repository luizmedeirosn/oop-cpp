#include <iostream>
#include <cctype> 
#include <string> 
using namespace std;

#include "Cupom.h"

int main() {
  cout << "\nTeste Cupom:\n";

  cout << "\n* Cupom1:\n";
  Cupom cupom1("", "Sabonete", 8, -4.30);
  cupom1.readCupom();
  cout << endl;
  cupom1.setPreço(3.87), cupom1.setID("10");
  cupom1.readCupom();

  cout << "\n\n* Cupom2:\n";
  Cupom cupom2("232", "Pizza", -3, 25.97);
  cupom2.readCupom();
  cout << endl;
  cupom2.setDescriçao("Coca Zero"), cupom2.setQuantidade(3);
  cupom2.readCupom();

  return 0;
}
