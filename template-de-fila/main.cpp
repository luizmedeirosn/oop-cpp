#include <iostream>
using std::cout, std::endl, std::cin, std::cerr;

#include <string>
using std::string;

#include <stdexcept>
using std::out_of_range;

#include "Fila.h"

int main() {
  Fila<int> fi;
  int num = 1;
	int el;

	cout << "---------------------------------------\n|| Bem vindo ao MENU, tamMaxFila-> 5 ||\n---------------------------------------" << endl;

	while(num){
		cout << "	0- Para sair.\n	1- Enqueue.\n	2- Dequeue.\n 	3- Para listar os elementos. \nOp-> ";
		cin >> num;

		try{
			if(num == 1){
				cout << "Enqueue-> ";
				cin >> el;
				fi.enqueue(el);
			}
			else if(num == 2){
				fi.dequeue(el);
				cout << "Dequeue-> " << el << endl;
			}
		}
		catch(out_of_range &e){
			cerr << e.what() << endl;
		}
		if(num == 3) cout << fi << endl;
	}
  return 0;
}