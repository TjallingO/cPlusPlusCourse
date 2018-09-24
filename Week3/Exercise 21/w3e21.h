







#ifndef SUMFUNCTIONS
#define SUMFUNCTIONS

#include <cstddef> //nodig?
#include <iostream>
#include <string>

struct ReturnValues
{
  bool TrueOrFalse;
  size_t argumentNumber;
  std::string argument;
};

void structCall(int nr, char const *arguments[]);
void structCall();
void boundCall(int nr, char const *arguments[]);
void boundCall();

#endif
