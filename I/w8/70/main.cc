#include "main.ih"


int main(int argc, char **argv)
{
  int x = 5;
  test testone(x);
  //test testone;
  //test testtwo = testone;
  //test testtwo = move(testone);
  //test testtwo(testone);
  test testtwo(move(testone));
  cout << testtwo.rthings() << '\n';

  //test testtwo(testone);
  /*
  cout << testtwo.rthings() << '\n';
  test testthree = std::move(testtwo);
  cout << testthree.rthings() << '\n';
  */
}


//met data member wel standard copy constructor zonder niet ?
