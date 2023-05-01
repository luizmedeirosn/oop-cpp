#ifndef DATA_H
#define DATA_H

class Data{

  public:
    Data(int a, int b, int c);

    void setDia(int nmr);
    int getDia();

    void setMes(int nmr);
    int getMes();

    void setAno(int nmr);
    int getAno();

    void mostrarData();

  private:
    int dia, mes, ano;

};
#endif