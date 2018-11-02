#include "main.ih"

string filetypecheck(string const &inputLoc)
{

  ifstream input{ inputLoc };

  char character;

  ;
/*
  char d;
  char e;

  input.get(d);
  input.get(e);
  //int a = static_cast<int const>(character);
  int a = static_cast<int const>(d); //c manier van type toch?
  int b = static_cast<int const>(e);

  int c = a*10+b;

  cout << a << ' ' << b << ' ' << c << '\n';

  if ( c <= 11)
  {
    cout << "binary input\n";
    return "binary input";
  }
  else
  {
    cout << "char input\n";
    return "char input";
  }
*/

  input.close();

  return "test";
  //cout << character << ' ' << sizeof(character) << ' ' << sizeof(char) << '\n';
  /*
  if (sizeof(character) == sizeof(char))
  {
    return "char";
    cout << "char!\n";
  }
  */

}
