
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
/*
  int x[8];

  //&x[10]-&x[3];
  cout << &*(x+10)-&*(x+3) << '\n';
*/
  //char *argv[8];
  //argv++[0];

  //cout << *(1+argv)[2] << '\n';
  /*
  char var[2][2];
  var[0][2] = w;
  char a = ++var[0][2];
  //int b = *(++var[0]+3);
  //int c = *(*(++var)+3);
  char d = ++(*(*(var)+2));
  cout << a << '\n';
  //cout << b << '\n';
  //cout << c << '\n';
  cout << d << '\n';
  */


  cout << 1 + *argv << '\n';
  cout << *(argv + 1) << '\n';
  cout << *argv + 1 << '\n';

}
