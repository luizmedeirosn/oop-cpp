#ifndef TEMPO_ZERO_H
#define TEMPO_ZERO_H

#include <stdexcept>

class TempoZero : public std::runtime_error
{
public:
  TempoZero(const char *e = "/!\\ O tempo não pode ser zero."): runtime_error(e) {}
};

#endif