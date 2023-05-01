#include <iostream>
#include <ctime>
using namespace std;

#include "Time.h"

int main() {
  cout << "Classe Time:\n\nTeste tic()" << endl << "Testando normalmente..." << endl;
  Time t(16,40);
  t.printUniversal();
  t.tic();
  t.printUniversal();
  
  cout << "\nCaso1...";
  cout << endl;
  Time t2(11,50,59);
  t2.printUniversal();
  t2.tic();
  t2.printUniversal();

  cout << "\nCaso2...";
  cout << endl;
  Time t3(11,59,59);
  t3.printUniversal();
  t3.tic();
  t3.printUniversal();

  cout << "\nCaso3...";
  cout << endl;
  Time t4(23,59,59);
  t4.printUniversal();
  t4.tic();
  t4.printUniversal();

  cout << "\nSem passagem de argumentos...";
  cout << endl;
  Time t5;
  t5.printUniversal();
  t5.tic();
  t5.printUniversal();

  return 0;
}