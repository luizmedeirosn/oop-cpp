#ifndef TEMPO_MAIOR_QUE_100_H
#define TEMPO_MAIOR_QUE_100_H

#include <stdexcept>

class TempoMaiorQueCem : public std::runtime_error
{
public:
  TempoMaiorQueCem(const char *e = "/!\\ Por preferências do usuário, o tempo não pode ser maior que cem."): runtime_error(e) {}
};

#endif