// Programming in C/C++
// Week 1: Assignment 4
// Tjalling Otter &  Emiel Krol

#include <iostream>

char const NTBs[]=

R"R(
  *********************************
  ^\\s+Encryption key:(\\w+)
  ^\\s+Quality=(\\d+)
  ^\\s+E?SSID:\"([[:print:]]+)\"
  ^\\s+ssid=\"([[:print:]]+)\"
  *********************************
)R";

// Defining the text that needs to be printed

int main()
{
  std::cout << "^\\s+Encryption key:(\\w+)"        << '\n' <<
             "^\\s+Quality=(\\d+)"               << '\n' <<
             "^\\s+E?SSID:\"([[:print:]]+)\""    << '\n' <<
             "^\\s+ssid=\"([[:print:]]+)\""      << '\n';
   std::cout << NTBs << '\n' ;                 //Printing the previously defined text in the console
}
