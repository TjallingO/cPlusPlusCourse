#include "charcount.ih"



CharCount::Char *CharCount::charSorter(Char *array, size_t size)
{
  for  (size_t idx = 0; idx < size; ++idx)
  {
    for (size_t index = 0 ; index < size - idx; ++index)
    {
      if  (array[index].ch > array[index + 1].ch)
        swap(array[index], array[index + 1]);
    }
  }
  return array;
}

//At the first iteration the inner for loop puts the highest valued value
//on the highest index
//This inner for loop has to happen size times. Which is done with the outer
//for loop. After each iteration of the outer for loop, the latest highest value
//does not have to be checked again.
