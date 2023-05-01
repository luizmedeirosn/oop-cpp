#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
using namespace std;


struct stRegistro{
	int nmrRegistro;
	char nome[30];
	int quantidade;
	double preco;
};

stRegistro registros[]{
	{3, "Lixadeira", 7, 57.98}, 
	{17, "Martelo", 76, 11.99}, 
	{24, "Serra_tico-tico", 21, 11.0}, 
	{39, "Cortador_de_grama", 3, 79.50}, 
	{56,"Serra_eletrica", 18 ,99.99}, 
	{68, "Chave_de_fenda", 106, 6.99}, 
	{77, "Marreta", 11 ,21.50}, 
	{83, "Chave_inglesa", 34 ,7.50}
};

bool salvar_dados(stRegistro c[], int n)
{
  ofstream fout("hardware.dat", std::ios::out);

  if (!fout)
    return false;
  
  for (int i = 0 ; i < n ; i++)
    fout << c[i].nmrRegistro << ' ' << c[i].nome << ' ' << c[i].quantidade << ' ' << c[i].preco << endl;

  fout.close();

  return true;
}

bool listar_todos()
{
  ifstream fin("hardware.dat", std::ios::in);

  if (!fin)
    return false;
  
  stRegistro c;

  cout << "N do registro | " << "Nome da ferramenta | " << "Quantidade | " << "Preço (R$)" << endl;
  
  cout << fixed;
  while (fin >> c.nmrRegistro >> c.nome >> c.quantidade >> c.preco)
  {   
    cout << setw(7) << c.nmrRegistro << ' ' << setw(25) << c.nome << ' ' << setw(8)  << c.quantidade << ' ' << setw(15)  << setprecision(2) << c.preco << endl;
  }
  cout << defaultfloat;

  fin.close(); // opcional

  return true;
}

int main() {
	cout << "/!\\ Questão imcompleta" << endl;
	salvar_dados(registros,8);
	listar_todos();

	return 0;
}