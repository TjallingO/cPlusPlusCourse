#include "charcount.ih"


void CharCount::enlarge()
{
  if  ((d_cap <<= 1) > d_max) //checks if there is capacity for another Char
    d_cap = d_max;            //object and doubles the capacity if needed
                               //if it is then larger than its cap its set
                               //to the maximum capacity instead

  CharCount::Char *tmp = rawCapacity();

    //allocates a new block of raw memory the size of the current capacity times
    //the size of a Char Object.
  for  (size_t index = d_cap; index--; )
    new(tmp + index) CharCount::Char{ d_info.ptr[index] };
    //copies the old objects into the newly created one
  destroy(); //destructs the old objects and the pointer to them
  d_info.ptr = tmp; //sets the ptr to the newly created raw block of memory
}
