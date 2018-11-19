#include "main.ih"



int main(int argc, char *argv[]) {

  Strings stringone;
/*
  //cout << argv[1] << '\n';
  cerr << __FUNCTION__ << __LINE__ << '\n';
  Strings stringtwo(argc, argv);
  cerr << __FUNCTION__ << __LINE__ << '\n';
  //Strings stringthree(stringtwo);
  Strings stringthree;
  stringthree = stringtwo;
  cerr << __FUNCTION__ << __LINE__ << '\n';
*/
  Strings stringfour(environ);

  //stringone.swap(stringfour);
  for (size_t idx = 0; idx < stringfour.size(); idx++) {
    cout << stringfour.printstring(idx) << '\n';
  }

  /*

  cout << stringone.size() << ' ' << stringone.capacity() << '\n';
  cout << stringtwo.size() << ' ' << stringtwo.capacity() << '\n';
  cout << stringthree.size() << ' ' << stringthree.capacity() << '\n';
*/
/*
  cerr << __FUNCTION__ << __LINE__ << '\n';
  for (size_t idx = 0; idx < stringtwo.size(); ++idx)
  {
    cout << stringtwo.printstring(idx) << '\n';
    //cout << stringthree.printstring(idx) << '\n';
  }
  cerr << __FUNCTION__ << __LINE__ << '\n';

/*
  for (size_t idx = 0; idx < stringone.size(); ++idx)
  {
    cout << stringone.printstring(idx) << '\n';
  }

  */
}
