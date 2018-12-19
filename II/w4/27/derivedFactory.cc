#include "main.ih"

Base **derivedFactory(size_t size)
{
/*
  Base **base = new Base *[size];
  //Derived *derived = new Derived [size];

  for (size_t idx = 0; idx < size; ++idx)
      //base[idx] = new Derived;
      base[idx] = newDerived(*base[idx]);



  //derived = 0;

  //delete[] derived;


  return base;
*/
  Derived **derived = new Derived *[size];
  Base **base = dynamic_cast<Base **>(derived);

}

//We set the array of pointers to base objects to point to derived objects
//instead such that the function returns a pointer to size pointers to Derived
//objects.
