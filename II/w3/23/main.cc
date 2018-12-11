#include "main.ih"

void caller(Base &obj)
{
  Derived &tmp = static_cast < Derived &> (obj);
  tmp.hello();
  cout << tmp.test() << '\n';
}

//Bad practise since now we have a tmp derived class which isnt properly
//initialised, the derived test function should return zero since it should
//have been intitialised to zero, it however returns a random size_t.


int main(int argc, char const **argv)
{
  Base myBase;
  caller(myBase);
}
