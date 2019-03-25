#include <iostream>
#include <unistd.h>   //getch
#include <termios.h>  //getch
#include <fstream>

using namespace std;

char getch();
bool fe(const char *fileName);
void createMain(bool scanPars);
void createScanPars();

int main()
{
  bool justMain, scanPars;
  if (fe("main.cc") | fe("main.ih"))
  {
    cout << "There is already a program here. Aborting.";
    return 1;
  }
  cout << "Just a main.ih and main.cc? [y/n] ";
  justMain = (getch() == 'y' ? 1 : 0);

  if (justMain)
  {
    createMain(0);
    return 0;
  }
  else
  {
    cout << "Want a parser and scanner? [y/n] ";
    scanPars = (getch() == 'y' ? 1 : 0);
    if (!scanPars)
    {
      cout << "Well, make up your mind. \n";
      createMain(0);
      return 0;
    }
    else
    {
      createMain(1);
      createScanPars();
    }
  }
}

char getch()
{
  char buf=0;
  struct termios old={0};
  fflush(stdout);
  if(tcgetattr(0, &old)<0)
      perror("tcsetattr()");
  old.c_lflag&=~ICANON;
  old.c_lflag&=~ECHO;
  old.c_cc[VMIN]=1;
  old.c_cc[VTIME]=0;
  if(tcsetattr(0, TCSANOW, &old)<0)
      perror("tcsetattr ICANON");
  if(read(0,&buf,1)<0)
      perror("read()");
  old.c_lflag|=ICANON;
  old.c_lflag|=ECHO;
  if(tcsetattr(0, TCSADRAIN, &old)<0)
      perror ("tcsetattr ~ICANON");
  printf("%c\n",buf);
  return buf;
 }

 bool fe(const char *fileName)
 {
   ifstream infile(fileName);
   return infile.good();
 }

void createMain(bool scanPars)
{
  ofstream maincc("main.cc");
  maincc << "#include \"main.ih\" \n"
         << '\n'
         << "int main(int argc, char const **argv) \n"
         << "{ \n"
         << "\t /* code */ \n"
         << "} \n";
  {
  ofstream mainih("main.ih");
  mainih << "#define ERR(msg) printf(\"%s : %d\", (msg), __LINE__) \n\n";
  }
  if (scanPars)
  {
    ofstream mainih("main.ih", std::ios_base::app);
    mainih << "#include \"parser/parser.h\" \n"
           << "#include \"scanner/scanner.h\" \n";
  }
  ofstream mainih("main.ih", std::ios_base::app);
  mainih << "using namespace std;";
}

void createScanPars()
{
  system("mkdir -p \\scanner");
  system("mkdir -p \\parser");
  ofstream scanih("scanner/scanner.ih");
  scanih << "#include \"scanner.h\"";
  ofstream lexer("scanner/lexer");
  lexer << "%%";
  ofstream grammar("parser/grammar");
  grammar << "%scanner ../scanner/scanner.h"
          << '\n'
          << "%%";
}
