#ifndef HUGEINTERAGER_H
#define HUGEINTERAGER_H

#include <string>

class HugeInteger{

  public:
    HugeInteger();

    //métodos de entrada e saída
    void input(char str[40]);
    void output();
    void printOrigi();

    // métodos de operações matemáticas
    void add(const HugeInteger &);
    int isEqualTo(const HugeInteger &);
    int isNotEqualTo(const HugeInteger &);
    int isGreaterThan(const HugeInteger &);
    int isLessThan(const HugeInteger &);
    int isGreaterThanOrIqual(const HugeInteger &);
    int isLessThanOrIqual(const HugeInteger &);

  private:
    char arr[40];
    int tamStr = 0;
    
    //métodos get
    inline int getTam() const {return tamStr;}
};
#endif