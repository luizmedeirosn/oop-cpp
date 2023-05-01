#include <iostream>
using std::cout, std::endl;
using std::cin;

#include "Array.h"

int main(){
  Array a1(3), a2(2), a3;  
	
  for(int i = 1 ; i < 4 ; i++)
		a1[i-1] = i;

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

  return 0;
}