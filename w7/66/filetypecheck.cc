#include "main.ih"

typecheck filetypecheck(string const &inputLoc)
{

  ifstream input{ inputLoc };

  char character;

  input.get(character);

    //cout << (int)character << '\n';
  if (character < 4)
    return BINARY;
  return CHARACTER;

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


  //cout << character << ' ' << sizeof(character) << ' ' << sizeof(char) << '\n';
  /*
  if (sizeof(character) == sizeof(char))
  {
    return "char";
    cout << "char!\n";
  }
  */

}
