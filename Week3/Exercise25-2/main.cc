#include "main.ih"

int main(int argc, char **argv)
  {

  size_t number = stoul(argv[1]);

  native boarded[number];

  for (size_t count = 0; count < number; ++count) {
    cout << "test1\n";
    native person;
    cout << "test2\n";
    if (count == 0)
    {
      boarded[count] = person;
      size_t randomValue = rand();
      boarded[count].eyecolour = (((randomValue >> 1) << 1) == randomValue ? "blue" : "brown");
    }
    else
    {
      cout << "else \n";
      size_t number2 = 0; //index checking where to insert
      while (boarded[number2].eyecolour != "brown")
      {
        ++number2;
        cout << number2 << '\n';
      }
        cout << "number2 " << number2 << '\n';
      for (int i = number; i >= number2; --i)
      {
        cout << "for " << i << '\n';
        boarded[i] = boarded[i - 1];
        cout << "for2\n";
      }
      size_t randomValue = rand();
      boarded[number2].eyecolour = (((randomValue >> 1) << 1) == randomValue ? "blue" : "brown");
    }
    cout << "count " << count << " number " << number << '\n';
    ++count;
  }


  for (size_t count = 0; count < number; ++count)
  {
    cout << boarded[count].eyecolour << '\n';
  }

}
