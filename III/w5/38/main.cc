#include "main.ih"

#include <iostream>

int main(int argc, char const **argv)
{
  // if ( argc = 1)


  Scanner scanner("input", "output");
  scanner.lex();

   string a = "hello ";
   string b = "world";
   string c = a + b;

   cout << "a\n"
   "b\n"
   "c\n";
  //programma dat grabber om strings heenzeet met counter uit static class?
  //moet ook deze class maken + grabber functie neem ik aan
}
