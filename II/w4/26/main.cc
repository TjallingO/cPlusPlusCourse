#include "main.ih"

int main(int argc, char const **argv)
{
  Base o_base;
  o_base.hello(cout);
  Derived o_derived("text that I typed");
  o_derived.hello(cout);
  Message o_message(o_base);
  o_message.show();
  Message o_message2(o_derived);
  o_message2.show();
}
