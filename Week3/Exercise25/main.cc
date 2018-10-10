#include "main.ih"



using namespace std;

struct native
{
  std::string eyecolour;
  bool stillHere = true;
};

int main(int argc, char **argv)
{
  native person[15];

  for (size_t count = 0; count < 15; ++count)
  {
    size_t randomValue = rand();
    person[count].eyecolour = (((randomValue >> 1) << 1) == randomValue ? "blue" : "brown");
    cout << person[count].eyecolour << '\n';
  }

  native peopleThatLeft[15];
  size_t index = 0;

  for (size_t count = 0; count < 15; ++count)
  {
    if (person[count].eyecolour == "blue" & person[count].stillHere == true)
      {
        person[count].stillHere = false;
        peopleThatLeft[index] = person[count];
        ++index;

      }
  }

  for (int count = 14; count >= 0; --count)
  {
    if (person[count].eyecolour == "brown" & person[count].stillHere == true)
      {
        person[count].stillHere = false;
        peopleThatLeft[index] = person[count];
        ++index;
    //    cout << count << '\t' << index << '\n';
      }
  }

  cout << "People leaving:\n";

  for (size_t count = 0; count < 15; ++count)
    cout << peopleThatLeft[count].eyecolour << '\n';
}
