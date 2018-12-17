#include "main.ih"

int main(int argc, char const **argv)
{
  Base o_base;
  Derived o_derived("text that I typed");
  Message o_message(o_base);
  o_message.show();
  Message o_message2(o_derived);
  o_message2.show();
}

//One Vtable per type that is used virtually for classes with
//virtual functions. Base and Derived are both polymorphic.
//So since we have one base object this one has 1 vtables with 1 vpointer
//to this table, we have 1 derived object which has 1 vtable and 1 vpointer
//to this vtable.The other two objects are objects that are not virtual and
//their data member is a reference to an already existing object so no new
//pointers or vtables are created.
