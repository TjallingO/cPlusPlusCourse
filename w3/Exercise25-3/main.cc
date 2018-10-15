#include "main.ih"

int main(int argc, char **argv)
{

  size_t number = stoul(argv[1]);

  native *boarded[number];

  personBoards(&boarded[number], number);

  cout << "third\n";
  //checkEyes(&boarded[number], number);



}
