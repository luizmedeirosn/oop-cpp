#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

#include "HugeInteger.h"

HugeInteger::HugeInteger()
{
  //inicialização do array
  for(int i = 0; i < 40; i++) arr[i] = '0';
}

void HugeInteger::input(char str[40])
{
  //valida a string e o seu tamanho;
  tamStr = strlen(str);
  if(tamStr > 40) cout << "Número inválido!\n", exit(1);

  for(int i = tamStr - 1; i >= 0 ; i--)
    if(!isdigit(str[i])) cout << "Número inválido!\n", exit(1);

  //copia o número de forma que fique invertido
  for(int i = 0; i < tamStr; i++) arr[40-(i+1)] = str[tamStr - (i+1)];
}

void HugeInteger::output()
{
  cout <<"Número-> "; 
  for(int i = getTam(); i > 0; i--) cout << (arr[40 - i]);
  cout <<"\nTamanho-> " << getTam() << endl;
}

void HugeInteger::printOrigi()
{
  //printa a string real
  cout <<"\nComo está implementado:\nNúmero-> "; 
  for(int i = 0; i < 40; i++) cout << arr[i];
  cout <<"\nTamanho-> " << getTam() << endl;
}

void HugeInteger::add(const HugeInteger &n)
{ 
  // maior vetor
  int maior = (tamStr > n.tamStr) ? tamStr : n.getTam();
  
  int soma = 0, sobrou = 0;
  for(int i = 1; i <= maior +1; i++)
  { 
    //transforma os elementos em int e os soma
    soma = ((arr[40 -i] - '0') + (n.arr[40 -i] - '0')) + sobrou;

    //processo reatribuição no HugeInteger
    if(soma >= 10)
    {
      if(soma == 10) arr[40 -i] = '0';
      if(soma == 11) arr[40 -i] = '1';
      if(soma == 12) arr[40 -i] = '2';
      if(soma == 13) arr[40 -i] = '3';
      if(soma == 14) arr[40 -i] = '4';
      if(soma == 15) arr[40 -i] = '5';
      if(soma == 16) arr[40 -i] = '6';
      if(soma == 17) arr[40 -i] = '7';
      if(soma == 18) arr[40 -i] = '8';
      sobrou = 1;
    }
    else
    {
      if(soma == 0) arr[40 -i] = '0';
      if(soma == 1) arr[40 -i] = '1';
      if(soma == 2) arr[40 -i] = '2';
      if(soma == 3) arr[40 -i] = '3';
      if(soma == 4) arr[40 -i] = '4';
      if(soma == 5) arr[40 -i] = '5';
      if(soma == 6) arr[40 -i] = '6';
      if(soma == 7) arr[40 -i] = '7';
      if(soma == 8) arr[40 -i] = '8';
      if(soma == 9) arr[40 -i] = '9';
      sobrou = 0;
    }
  }

  int imaginario = 0;
  for(int i = 0; i < 40; i++)
    if(arr[i] != '0')
    {
      imaginario = i;
      break;
    }
  //atualiza o tamanho do HugeInteger
  tamStr = 40 - imaginario;
}

int HugeInteger::isEqualTo(const HugeInteger &n)
{
  if(tamStr != n.tamStr) return 0;
  
  for(int i = getTam(); i > 0; i--)
    if(arr[40 -i] != n.arr[40 -i]) return 0;
  
  return 1;
}

int HugeInteger::isNotEqualTo(const HugeInteger &n)
{
  if(tamStr != n.tamStr) return 1;
  for(int i = 1; i <= tamStr; i++) 
    if(arr[40 -i] != n.arr[40 -i]) return 1;
    
  return 0;
}

int HugeInteger::isGreaterThan(const HugeInteger &n)
{
  if(tamStr > n.tamStr) return 1;
  else if(tamStr < n.tamStr) return 0;
  else
  {
    for(int i = tamStr; i > 0; i--)
    {
      if((arr[40 -i] -'0') > (n.arr[40 -i]-'0')) return 1;
      if((arr[40 -i] -'0') < (n.arr[40 -i]-'0')) return 0;
    }
  }
  return 0;
}

int HugeInteger::isLessThan(const HugeInteger &n)
{
  if(tamStr < n.tamStr) return 1;
  else if(tamStr > n.tamStr) return 0;
  else
  {
    for(int i = tamStr; i > 0; i--)
    {
      if((arr[40 -i] -'0') < (n.arr[40 -i]-'0')) return 1;
      if((arr[40 -i] -'0') > (n.arr[40 -i]-'0')) return 0;
    }
  }
  return 0;
}

int HugeInteger::isGreaterThanOrIqual(const HugeInteger &n)
{
  if(tamStr > n.tamStr) return 1;
  else if(tamStr < n.tamStr) return 0;
  else
  {
    for(int i = tamStr; i > 0; i--)
    {
      if((arr[40 -i] -'0') > (n.arr[40 -i]-'0')) return 1;
      if((arr[40 -i] -'0') < (n.arr[40 -i]-'0')) return 0;
    }
  }
  return 1;
}

int HugeInteger::isLessThanOrIqual(const HugeInteger &n)
{
  if(tamStr < n.tamStr) return 1;
  else if(tamStr > n.tamStr) return 0;
  else
  {
    for(int i = tamStr; i > 0; i--)
    {
      if((arr[40 -i] -'0') < (n.arr[40 -i]-'0')) return 1;
      if((arr[40 -i] -'0') > (n.arr[40 -i]-'0')) return 0;
    }
  }
  return 1;
}