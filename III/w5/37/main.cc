#include "main.ih"
#include "Scanner.h"

int main(int argc, char const **argv)
{
  Scanner hp("input", "output");
  hp.lex();
}
