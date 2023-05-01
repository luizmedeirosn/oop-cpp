#ifndef HUGEINTERAGER_H
#define HUGEINTERAGER_H

class HugeInteger{
	friend ostream &operator<<(ostream &, const HugeInteger &);
  public:
    HugeInteger();

    //métodos de entrada e saída
    void input(const char *str);
    void output(); //printa só os numeros que interessam no array
    void printOrigi(); //printa o array como está implementado

		//métodos get
    int getTam() const;

    // métodos de operações matemáticas
    void add(const HugeInteger &);
    int isEqualTo(const HugeInteger &) const;
    int isNotEqualTo(const HugeInteger &) const;
    int isGreaterThan(const HugeInteger &) const;
    int isLessThan(const HugeInteger &) const;
    int isGreaterThanOrIqual(const HugeInteger &) const;
    int isLessThanOrIqual(const HugeInteger &) const;
		
		//Métodos de Sobrecarga
		const HugeInteger &operator=(const char *s);
  	const HugeInteger operator+(const HugeInteger &);
		const HugeInteger &operator+=(const HugeInteger &n);
		bool operator==(const HugeInteger &n) const;
		bool operator!=(const HugeInteger &n) const;
		bool operator>(const HugeInteger &n) const;
		bool operator<(const HugeInteger &n) const;
		bool operator>=(const HugeInteger &n) const;
		bool operator<=(const HugeInteger &n) const;

  private:
    char arr[40];
		int tamStr = 0;
    
};
#endif