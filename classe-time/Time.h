#ifndef TIME_H
#define TIME_H

class Time 
{
public:
  //construtor normal com passagem de argumentos
  Time(int , int = 0, int = 0);

  //construtor com hra local
  Time();

  //funções set
  void setTime(int , int, int);

  inline void setHour( int );
  inline void setMinute( int );
  inline void setSecond( int );

  //funções get
  inline int getHour() {return hour;}
  inline int getMinute() {return minute;}
  inline int getSecond() {return second;}

  void printUniversal();
  void printStandard();
  void tic();

private:
  int hour;
  int minute;
  int second;
};

#endif