#include "factory.ih"

string *factory(string const &str, size_t size)
{
  static string staticString = str;             // Can't access str otherwise

  struct ExString: public string              // Local struct extending string
  {
    ExString()
    :
      string(staticString)
    {}
  };
  return new ExString[size];
};
