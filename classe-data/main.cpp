#include <iostream>
#include <cctype> 
#include <string> 
using namespace std;

#include "Data.h"

int main() {
  cout << "\nTeste Data:\n\n";

  Data data1(1, 58, 1967);
  data1.mostrarData();
  data1.setDia(7), data1.setMes(9);
  data1.setAno(2021), data1.mostrarData();

  return 0;
}
