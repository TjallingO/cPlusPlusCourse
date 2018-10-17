#include "w3e25.h"

void firstBoards(native *boarded[], native *person, size_t count){

  *boarded[count] = *person;
  size_t randomValue = rand();
//  (*boarded[count]).eyecolour = (((randomValue >> 1) << 1) == randomValue ? "blue" : "brown");
}
