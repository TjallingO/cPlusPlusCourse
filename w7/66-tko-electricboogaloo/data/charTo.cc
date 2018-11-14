#include "data.ih"

int Data::charTo(string optionb)
{
  if (optionb == "-b")
    return chartobin();
  else
    return chartochar();
}
