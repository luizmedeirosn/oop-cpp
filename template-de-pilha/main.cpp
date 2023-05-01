#include <iostream>
using std::cout, std::endl, std::cin, std::cerr;

#include <string>
using std::string;

#include <stdexcept>
using std::out_of_range;

#include "Pilha.h"

int main() {
  Pilha<int> pi;
  int num = 1;
	int el;

	cout << "---------------------------------------\n|| Bem vindo ao MENU, tamMaxPilha-> 5 ||\n---------------------------------------" << endl;

	while(num){
		cout << "	0- Para sair.\n	1- Push.\n	2- Pop.\n 	3- Para listar os elementos. \nOp-> ";
		cin >> num;

		try{
			if(num == 1){
				cout << "Push-> ";
				cin >> el;
				pi.push(el);
			}
			else if(num == 2){
				pi.pop(el);
				cout << "Pop-> " << el << endl;
			}
		}
		catch(out_of_range &e){
			cerr << e.what() << endl;
		}
		if(num == 3) cout << pi << endl;
	}
  return 0;
}