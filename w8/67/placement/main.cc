#include "main.ih"

int main(int argc, char *argv[]) {
  Strings stringone;
  //cout << argv[1] << '\n';
  Strings stringtwo(argc, argv);
  //Strings stringthree(**environlike);
  Strings stringthree(stringtwo);


  cout << stringone.size() << ' ' << stringone.capacity() << '\n';
  cout << stringtwo.size() << ' ' << stringtwo.capacity() << '\n';
  cout << stringthree.size() << ' ' << stringthree.capacity() << '\n';

  for (size_t idx = 0; idx < stringtwo.size(); idx++)
  {
    cout << stringtwo.printstring(idx) << '\n';
    cout << stringthree.printstring(idx) << '\n';
  }
}
