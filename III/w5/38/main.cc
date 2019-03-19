#include "main.ih"

#include <iostream>

int main(int argc, char const **argv)
{
  // if ( argc = 1)


  Scanner scanner("input", "output");
  scanner.lex();

   // string a = "hello ";
   // string b = "world";
   // string c = a + b;
   //
   // cout << "a\n"
   // "b\n"
   // "c\n";

   cout << R"R(
     *********************************
     ^\\s+Encryption key:(\\w+)
     ^\\s+Quality=(\\d+)
     ^\\s+E?SSID:\"([[:print:]]+)\"
     ^\\s+ssid=\"([[:print:]]+)\"
     *********************************
   )R" << '\n';

  //dit is een raw string literal
}
