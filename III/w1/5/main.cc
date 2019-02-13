#include "main.ih"

int main(int argc, char const **argv)
{
  Operator one{ "yes, " };                // Added this to test whether
  Operator two;                           // joining actually works

  Operator three{ one + two };
  Operator four{ one + 42 };
  Operator five{ one + "hello world" };

  cout << five;
}
