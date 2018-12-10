#include "main.ih"

string *factory(string const &str, size_t size)
{
  static string tempString = str;
  
  struct ExString: public string
  {
    ExString()
    :
      string(tempString)
    {}
  };
  return new ExString[size];
};

int main(int argc, char const **argv)
{
  string const myString{ "goodbye" };
  string *myStringArray = factory(myString, 10);
  cout << myStringArray[5];
}
