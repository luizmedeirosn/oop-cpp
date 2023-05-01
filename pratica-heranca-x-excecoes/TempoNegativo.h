#ifndef TEMPO_NEGATIVO_H
#define TEMPO_NEGATIVO_H

#include <stdexcept>

class TempoNegativo : public std::runtime_error
{
public:
  TempoNegativo(const char *e = "/!\\ O tempo não pode ser negativo."): runtime_error(e) {}
};

#endif