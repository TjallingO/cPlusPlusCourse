#include "main.ih"

int main(int argc, char **argv)
  {


  size_t number = stoul(argv[1]);

  native boarded[number];

  for (size_t count = 0; count < number; ++count) {

    native person;

    if (count == 0)
    {
      boarded[count] = person;
      size_t randomValue = rand();
      boarded[count].eyecolour = (((randomValue >> 1) << 1) == randomValue ? "blue" : "brown");
    }
    else
    {
      size_t number2 = 0; //index checking where to insert
      while (boarded[number2].eyecolour != "brown")
      {
        ++number2;
      }

      for (int i = number - 1; i >= number2 + 1; --i)
      {
        boarded[i] = boarded[i - 1];
      }
      size_t randomValue = rand();
      boarded[number2].eyecolour = (((randomValue >> 1) << 1) == randomValue ? "blue" : "brown");

    }
  }


  for (size_t count = 0; count < number; ++count)
  {
    cout << boarded[count].eyecolour << '\n';
  }


}
