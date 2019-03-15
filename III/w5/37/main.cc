#include "main.ih"
#include "flexcpp/Scanner.h"

int main(int argc, char const **argv)
{
  Scanner hp("input", "output");
  hp.lex();
}
