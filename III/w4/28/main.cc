#include "main.ih"

int main(int argc, char const **argv)
{
  int plain = 3;
  auto ptr = &plain;

  cout << "plain :" << BasicTraits<const int>::isPlainType << '\n'
       << "pointer :" << BasicTraits<int*>::isPointerType << '\n'
       << "reference :" << BasicTraits<int&>::isRefType << '\n'
       << "rvalue reference :" << BasicTraits<int&&>::isRRefType << '\n';

   BasicTraits<int>   BTobject1(ptr);
   BasicTraits<int*>  BTobject2(ptr);
   BasicTraits<int&>  BTobject3(ptr);
   BasicTraits<int&&> BTobject4(ptr);

   cout << BTobject1.value() << '\n'
        << BTobject2.value() << '\n'
        << BTobject3.value() << '\n'
        << BTobject4.value() << '\n'; //prints 3 regardless of template arg
        //pain is niet const.....
}
