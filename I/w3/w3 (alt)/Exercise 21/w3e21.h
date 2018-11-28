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

void combine(ReturnValues *input, size_t number, std::string requestedarg);
bool structCall(int argc, char const *arguments[]);
bool structCall();
void boundCall(int argc, char const *arguments[]);
void boundCall();

#endif