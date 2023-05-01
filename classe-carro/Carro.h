#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;


class Carro{

  public:
    Carro(string nome, int ano);
    void setMarca(string nome);
    string getMarca();
    void setAno(int ano);
    int getAno();
    void displayMessage();

  private:
    string marca;
    int anoCarro;
};
#endif