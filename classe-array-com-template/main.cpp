#include <iostream>
#include <string>
using std::cout, std::endl;
using std::cin;
using std::string;

#include "Array.h"

int main(){
	Array<double> a1(3), a2(2), a3;
	
  for(int i = 1 ; i < 4 ; i++)
		a1[i-1] = i *1.3;

	for(int i = 4 ; i < 6 ; i++)
		a2[i-4] = i;

	cout << "\narr1..." << endl;
	cout << a1;
	cout << endl;

	cout << "arr2..." << endl;   
	cout << a2; 
	cout << endl;

	a3 = a1 + a2;
	cout << "arr3..." << endl;   
	cout << a3;

	a3 += a3;
	cout << "\narr3..." << endl;   
	cout << a3;

	a3 += a1;
	cout << "\narr3..." << endl;   
	cout << a3;



	cout << "\n\n\n/!\\Com Strings:";
  Array<string> a1s(3), a2s(2), a3s;
	
  for(int i = 1 ; i < 4 ; i++)
		a1s[i-1] = "a b";

	for(int i = 4 ; i < 6 ; i++)
		a2s[i-4] = "c d";

	cout << "\narr1s..." << endl;
	cout << a1s;
	cout << endl;

	cout << "arr2s..." << endl;   
	cout << a2s; 
	cout << endl;

	a3s = a1s + a2s;
	cout << "arr3s..." << endl;   
	cout << a3s;

	a3s += a3s;
	cout << "\narr3s..." << endl;   
	cout << a3s;

	a3s += a1s;
	cout << "\narr3s..." << endl;   
	cout << a3s;

  return 0;
}