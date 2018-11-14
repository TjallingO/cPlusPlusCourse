#include "data.ih"

int Data::writeFile(string optionb)
{

  bool binfile = isItaBinaryFile();

  if (binfile)
    binTo(optionb);
  else
    return charTo(optionb);

}
