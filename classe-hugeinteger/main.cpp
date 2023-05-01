#include <iostream>
using namespace std;

#include "HugeInteger.h"

int main(){
  char num1[40], num2[40];
  HugeInteger s1, s2, s3;

  cout << "Digite o num1: ";
  cin >> num1;
  cout << "Digite o num2: ";
  cin >> num2;
  
  cout << "\ns1..." << endl;
  s1.input(num1);
  s1.output();
  //s1.printOrigi();

  cout << "\ns2..." << endl;
  s2.input(num2);
  s2.output();
  //s2.printOrigi();

  cout << "\ns1.add(s2)..." << endl;
  s1.add(s2);
  s1.output();
  //s1.printOrigi();

  cout << "\ns1.isEqualTo(s2)..." << endl;
  if(s1.isEqualTo(s2)) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\ns1.isNotEqualTo(s2)..." << endl;
  if(s1.isNotEqualTo(s2)) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\ns1.isGreaterThan(s2)..." << endl;
  if(s1.isGreaterThan(s2)) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\ns1.isLessThan(s2)..." << endl;
  if(s1.isLessThan(s2)) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\ns1.isGreaterThanOrqual(s2)..." << endl;
  if(s1.isGreaterThanOrIqual(s2)) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\ns1.isLessThanOrIqual(s2)..." << endl;
  if(s1.isLessThanOrIqual(s2)) cout << "Sim" <<endl;
  else cout << "Não" << endl;
  
  return 0;
}