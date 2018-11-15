#include "main.ih"



int main(int argc, char *argv[]) {
  Strings stringone;
  //cout << argv[1] << '\n';
  Strings stringtwo(argc, argv);

  //Strings stringthree(stringtwo);
  Strings stringthree;
  stringthree = stringtwo;

  Strings stringfour(environ);

  //stringone.swap(stringfour);

  /*

  cout << stringone.size() << ' ' << stringone.capacity() << '\n';
  cout << stringtwo.size() << ' ' << stringtwo.capacity() << '\n';
  cout << stringthree.size() << ' ' << stringthree.capacity() << '\n';
*/
  for (size_t idx = 0; idx < stringtwo.size(); ++idx)
  {
    cout << stringtwo.printstring(idx) << '\n';
    cout << stringthree.printstring(idx) << '\n';
  }
/*
  for (size_t idx = 0; idx < stringone.size(); ++idx)
  {
    cout << stringone.printstring(idx) << '\n';
  }

  */
}
