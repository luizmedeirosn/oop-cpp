#include <iostream>
using std::cout, std::endl;

#include "Complex.h"

void linha(){cout << "-------------------------------\n";}

int main(){
  Complex num1(10,-1);
  Complex num2(5,3);

  cout << "\nC1: ";
  num1.print();
  cout << "C2: ";
  num2.print();
	linha();
	linha();

  cout << "C1 = C1 + C2 \n";
  num1 = num1 + num2;
  cout << "C1: ";
  num1.print();
  cout << "C2: ";
	num2.print();

  cout << "\nC1 = C1 - C2 \n";
  num1 = num1 - num2;
  cout << "C1: ";
  num1.print();
  cout << "C2: ";
  num2.print();
	linha();
	linha();


	cout << "C1 += C2 \n";
	num1 += num2;
	cout << "C1: ";
  num1.print();
  cout << "C2: ";
  num2.print();

	cout << "\nC1 -= C2 \n";
	num1 -= num2;
	cout << "C1: ";
  num1.print();
  cout << "C2: ";
  num2.print();
	linha();
	linha();


	cout << "C1++\n";
	num1++;
	cout << "C1: ";
  num1.print();

	cout << "\nC1--\n";
	num1--;
  cout << "C1: ";
  num1.print();
	linha();
	linha();


	cout << "++C1\n";
	++num1;
	cout << "C1: ";
  num1.print();

	cout << "\n--C1\n";
	--num1;
  cout << "C1: ";
  num1.print();
	linha();
	linha();

  return 0;
}