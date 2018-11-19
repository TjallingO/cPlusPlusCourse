#include "main.ih"

int main(int argc, char *argv[]) {


  Strings stringone(argc, argv);

  Strings stringtwo = stringone;

  Strings stringthree(stringone);
  
  Strings stringfour(move(stringone));

  stringtwo.printstring();
  stringthree.printstring();
  stringfour.printstring();

}
