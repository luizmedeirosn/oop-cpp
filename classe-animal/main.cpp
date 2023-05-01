#include <iostream>
using namespace std;

#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

int main() {
  Animal a1, a2("Torvi","Dálmata");
	a1.caminha();
	a2.caminha();
	cout << endl;

	cout << "Cachorros..." << endl;
	Cachorro c1("Rufus", "Presa Canário"), c2;
	cout << c1.late();
	cout << c2.late();

	cout << "\nGatos..." << endl;
	Gato g1, g2("Persa", "Azul Russo");
	cout << g1.mia();
	cout << g2.mia();

	return 0;
}