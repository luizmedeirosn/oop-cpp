#include <iostream>

#include "IntegerSet.h"

int main() {
  IntegerSet set1;

  int arr[] = {10,20,50};
  IntegerSet set2(arr,3);

  set1 << 10;
	std::cout << "set1..." << std::endl;
  set1.print();
	std::cout << std::endl;

	set2 >> 50;
	std::cout << "set2..." << std::endl;
  set2.print();
	std::cout << std::endl;



	IntegerSet set3 = set1 | set2;
	std::cout << "set3..." << std::endl;
  set3.print();
	std::cout << std::endl;



	IntegerSet set4 = set1 & set2;
	std::cout << "set4..." << std::endl;
  set4.print();
	std::cout << std::endl;

	std::cout << "set4..." << std::endl;
	set4 << 20 << 50 << 70;
	set4.print();
	std::cout << std::endl;

	std::cout << "set4..." << std::endl;
	set4 >> 20 >> 50;
	set4.print();

  return 0;
}