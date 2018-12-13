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

//One Vtable per object per type that is used virtually for classes with
//virtual functions. Base has a virtual function and derived has one
//aswell.
//Furthermore Base must have a virtual destructor. So since we have one base
//object this one has 2 vtables and the 2 vpointers to these tables, we have
//one 1 derived object with 3 pointers, of which 1 is to its own vtable and 2
//to the vtables of base.
//The other two objects are objects that are not virtual and their data member
//is a reference to an already existing object so no new pointers or vtables
//are created.
