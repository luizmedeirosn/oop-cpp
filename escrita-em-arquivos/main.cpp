#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>

struct stLine{
	char type[10];
	int size;
};

int main() {
	std::ofstream fout("dados.dat", std::ios::out); //gravaçao dos dados
	
 	fout << "bool " << sizeof(bool) << std::endl;
 	fout << "char " << sizeof(char) << std::endl;
 	fout << "short " << sizeof(short) << std::endl;
 	fout << "int " << sizeof(int) << std::endl;
 	fout << "long " << sizeof(long) << std::endl;
 	fout << "long_long " << sizeof(long long) << std::endl;
 	fout << "float " << sizeof(float) << std::endl;
 	fout << "double " << sizeof(double) << std::endl;
 	fout << "long_double " << sizeof(long double) << std::endl;
	fout.close();

	stLine line;
	std::ifstream fin("dados.dat", std::ios::in); //leitura dos dados
	
	std::cout << std::left;
	std::cout << "Tamanho em bytes:" << std::endl;
	while(fin >> line.type >> line.size){
		std::cout << std::setw(13) << line.type << std::setw(3) << line.size << std::endl;
	}
	std::cout << std::defaultfloat;

	return 0;
}