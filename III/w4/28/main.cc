#include "main.ih"

int main(int argc, char const **argv)
{


  cout << "plain :" << BasicTraits<int>::isPlainType << '\n'
       << "pointer :" << BasicTraits<int*>::isPointerType << '\n'
       << "reference :" << BasicTraits<int&>::isRefType << '\n';
       // << "rvalue reference :" << BasicTraits<int&&>::isRRefType << '\n';

   BasicTraits<int *>::ValueType value = 12; //why?
   cout << value << '\n';
}
