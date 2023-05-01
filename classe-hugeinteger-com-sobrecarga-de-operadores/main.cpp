#include <iostream>
#include <cstdio>
using namespace std;

#include "HugeInteger.h"

int main(){
  HugeInteger n1, n2, n3, n4, n5, n6;

  cout << "\nn1..." << endl;
  n1.input("7974659841356841539846513");
  cout << n1 << endl;

  cout << "\nn2..." << endl;
  n2.input("9784651239846519784651679465134651");
  cout << n2 << endl;

	cout << "\nn3..." << endl;
	n3 = "9784651239846519784651679465134651";
	cout << n3 << endl;

	cout << "\nn4..." << endl;
	n4 = n1 + n2;
	cout << n4 << endl;

	cout << "\nn5..." << endl;
	n5.input("9784651239846519784651679465134651");
	n5 += n4;
  cout << n5 << endl;

	cout << "\nn1.isEqualTo(n2)..." << endl;
  if(n1 == n2) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\nn1.isNotEqualTo(n2)..." << endl;
  if(n1 != n2) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\nn1.isGreaterThan(n2)..." << endl;
  if(n1 > n2) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\nn1.isLessThan(n2)..." << endl;
  if(n1 < n2) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\nn1.isGreaterThanOrqual(n2)..." << endl;
  if(n1 >= n2) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  cout << "\nn1.isLessThanOrIqual(n2)..." << endl;
  if(n1 <= n2) cout << "Sim" <<endl;
  else cout << "Não" << endl;

  return 0;
}