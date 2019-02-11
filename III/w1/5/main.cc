#include "main.ih"

int main(int argc, char const **argv)
{
  Operator one{ "yes, " };
  Operator two;

  Operator three{ one + two };
  Operator four{ one + 42 };
  Operator five{ one + "hello world" };

  cout << five;
}
