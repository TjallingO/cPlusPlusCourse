
#include "w3e25.h"

using namespace std;

void personBoards(native *boarded[], size_t number)
{

  for (size_t count = 0; count < number; ++count)
  {

    native person;
    person.eyecolour = "blue";
    //cout << "person " << (person).eyecolour << '\n';
    (*boarded)[number] = person;
    //person = (*boarded)[number];
    cout << "person " << person.eyecolour << '\n';
    cout << "boarded " << (*boarded)[number].eyecolour << '\n';
  }
    /*
    cout << ".1\n";
    native *person = new native();
    cout << ".2\n";
    size_t randomValue = rand();
    cout << ".3\n";
    string colour = (((randomValue >> 1) << 1) == randomValue ? "blue" : "brown");
    cout << ".4\n";
    //(person -> eyecolour) = (boarded -> eyecolour) + count;
    //char ccount = count;
    person = boarded[count];// + ccount;
    //cout << ".45\n";
    *person -> eyecolour = colour;
    //cout << ".5\n";       //moet appart voor if 0 en else want bij 0 moet ie gewoon daar worden gezezt en bij else hangt het af van blauwe ogen.
    cout << (*person).eyecolour << '\n';
    if (count == 0)

    {
      cout << ".7\n";
      cout << (*person).eyecolour << '\n';
      cout << ".8\n";
      //cout << (*person).eyecolour << '\n';
      //cout << (&boarded[count]->eyecolour) << '\n';
    }
    else
    {
      cout << "1\n";
      size_t number2 = 0; //index checking where to insert
      while (boarded[number2]->eyecolour != "brown")
      {
      cout << "1.1\n";
      ++number2;
      cout << "1.11\n";
      }
      for (int i = number - 1; i >= number2 + 1; --i)
      {
        cout << "1.2\n";
        *boarded[i] = *boarded[i - 1];
        cout << "1.3\n";
      }
    }
    cout << "5\n";
    //delete person;
    cout << "6\n";
  }
  */
}
