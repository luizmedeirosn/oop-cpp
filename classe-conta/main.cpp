#include <iostream>
#include <cctype> 
#include <string> 
using namespace std;

#include "ContaBanco.h"

int main() {
  cout << "\nTeste ContaBanco:\n\n";
  ContaBanco conta1(-7);
  cout << "\nO saldo da conta1 é de " << conta1.getSaldo() << " reais." << endl;
  conta1.debitar(560), conta1.creditar(370);
  cout << "\nO saldo da conta1 é de " << conta1.getSaldo() << " reais." << endl;

  ContaBanco conta2(1000);
  conta2.debitar(560), conta2.creditar(370);
  cout << "O saldo da conta2 é de " << conta2.getSaldo() << " reais." << endl;

  return 0;
}
