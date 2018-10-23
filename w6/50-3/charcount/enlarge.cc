#include "charcount.ih"


void CharCount::enlarge()
{
  if  ((d_size <<= 1) > d_cap) //checks if there is capacity for another Char
    d_size = d_cap;            //object and doubles the capacity if needed
                               //if it is then larger than its cap its set
                               //to the maximum capacity instead
  CharCount::Char *tmp = static_cast<CharCount::Char *>(
    operator new(d_size * sizeof(CharCount::Char)));
    //allocates a new block of raw memory the size of the current capacity times
    //the size of a Char Object.
  for  (size_t index = d_size; index--; )
    new(tmp + index) CharCount::Char{ d_info.ptr[index] };
    //copies the old objects into the newly created one
  destroy(); //destructs the old objects and the pointer to them
  d_info.ptr = tmp; //sets the ptr to the newly created raw block of memory
}
