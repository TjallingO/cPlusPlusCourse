#include "main.ih"

int main(int argc, char const **argv)
{
  // cout <<
  //   Merge<
  //       Chars<'1', '2', '3'>,
  //       Merge<Chars<'4', '5'>, OneChar<'6'>::CP
  //       >::CP() << '\n';

  Merge<Chars<'4', '5'>, OneChar<'6'>> test;
  cout << test.CP();
}
