#include <iostream>

#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"

void linha(){
	cout << "---------------------------------------------------\n";}

int main() {
	cout << "\nImóveis...\n";
  Imovel i1, i2("Centro", 770.472);
	i1.setEndereço("Zé Pinheiro").setPreço(170.542);
	cout << i1 << i2;
	linha();
	linha();

	cout << "\nImóveis Novos...\n";
	ImovelNovo in1(i1), in2("Cruzeiro", 150.278);
	cout << in1 << in2;
	linha();
	linha();

	cout << "\nImóveis Velhos...\n";
	ImovelVelho iv1(i1), iv2;
	iv2.setEndereço("Cruzeiro").setPreço(150.278);
	cout << iv1 << iv2;

	return 0;
}