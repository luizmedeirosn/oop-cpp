#ifndef CUPOM_H
#define CUPOM_H

#include <string>
using std::string;

class Cupom{

  public:
    Cupom(string s1, string s2, int quantidade, double valor);

    void setID(string s1);
    string getID();

    void setDescriçao(string s2);
    string getDescriçao();

    void setQuantidade(int quantidade);
    int getQuantidade();

    void setPreço(double valor);
    double getPreço();

    double calculaCupom();
    void readCupom();

  private:
    string id, descriçao;
    int qtd;
    double preço;
};
#endif