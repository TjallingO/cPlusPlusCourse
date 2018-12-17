#include "main.ih"

int main(int argc, char const **argv)
{

  Base **bp = derivedFactory(10);

  delete[] bp;

}
