#include "main.ih"

int main(int argc, char const **argv)
{
  // cout <<
  //   Merge<
  //       Chars<'1', '2', '3'>,
  //       Merge<Chars<'4', '5'>, OneChar<'6'>::CP
  //       >::CP() << '\n';

  Chars<'1', '2', '3'> test;
  cout << test << '\n';
  OneChar<'1'> test2;
  cout << test2.CP() << '\n';
}
