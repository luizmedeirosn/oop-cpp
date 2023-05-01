#include <iostream>
#include <string>
using std::cout, std::endl, std::string;

template< class T > //obs: o tipo do T vai ser o tipo do argumento na chamada, prestar atenção quando o tipo do retorno for diferente do tipo dos argumentos.

bool equals(const T &n1, const T &n2){ 
	return n1 == n2 ? true : false;
}

int main(){
	cout << "1 == 1? ";
  cout << equals(1,1) << endl;

	cout << "Hidromel == Cerveja? ";
  cout << equals(string("Hidromel"),string("Cerveja")) << endl;

	cout << "2.7 == 3.0? ";
  cout << equals<double>(2.7,3) << endl; //argumentos de tipos diferentes, mas especificando o tipo com o <double>(pode ser qualquer outro compatível).
}