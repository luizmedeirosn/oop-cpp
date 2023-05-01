#include <iostream>
#include <cctype> 
#include <string> 
using namespace std;

#include "Empregado.h"

int main() {
  cout << "\nTeste Empregado:\n";
  
  cout << "\n* Empregado1:";
  Empregado empregado1("Ana", "Dos Santos", 2000);
  empregado1.identifica();
  empregado1.setNome("Maria");
  empregado1.setSobrenome("Fofa");
  empregado1.setSalario(3200);
  empregado1.aumento(10);
  empregado1.identifica();

  cout << "\n\n* Empregado2:";
  Empregado empregado2("Bob", "Augusto", 1750);
  empregado2.identifica();
  empregado2.aumento(10), empregado2.identifica();

  return 0;
}
