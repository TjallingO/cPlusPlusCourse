#include "w3e25.h"

using namespace std;

void checkEyes(native *boarded[], size_t number){

  for (size_t count = 0; count < number; ++count)
    cout << (*boarded[count]).eyecolour << '\n';
}
