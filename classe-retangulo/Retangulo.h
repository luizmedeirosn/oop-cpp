#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo
{
  public:
    Retangulo(double = 1.0, double = 1.0);
    
    //métodos set
    inline void setAltura(double);
    inline void setLargura(double);

    //métodos get
    inline double getAltura() {return altura;}
    inline double getLargura() {return largura;}

    //metodos para calculos e exibiçoes
    inline double perimetro() {return (altura * 2) + (largura * 2);}
    inline double area() {return altura * largura;}
    void printMeasures();

  private:
    double altura;
    double largura;
};



#endif