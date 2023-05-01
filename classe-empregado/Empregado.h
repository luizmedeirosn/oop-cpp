#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>
using std::string;

class Empregado{

  public:
    Empregado(string s1, string s2, double valor);
    
    void setNome(string nome1);
    string getNome();

    void setSobrenome(string nome2);
    string getSobrenome();

    void setSalario(int valor);
    double getSalario();

    void aumento(double porcentagem);
    void identifica();

  private:
    string nome;
    string sobrenome;
    double salarioMensal;

};
#endif