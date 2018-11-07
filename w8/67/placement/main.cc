#include "main.ih"

int main(int argc, char *argv[]) {
  Strings stringone;
  //cout << argv[1] << '\n';
  Strings stringtwo(argc, argv);
  //Strings stringthree(**environlike);
  cout << stringone.size() << ' ' << stringone.capacity() << '\n';
  cout << stringtwo.size() << ' ' << stringtwo.capacity() << '\n';

}
