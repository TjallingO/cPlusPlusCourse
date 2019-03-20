#include "main.ih"

int processfile(const char *file)
{
  size_t curLine = 0;
  Scanner flatbed(file, "/dev/null");
  while (true)
  {
    if (curLine != flatbed.lineNr())
    {
      curLine = flatbed.lineNr();
      cout << "\nLine " << curLine << ": ";
    }
    switch (flatbed.lex())
    {
      case 0:
        return 0;
      case INT:
        cout << "INT: " << flatbed.matched() << ' ';
        break;
      case WORD:
        cout << "WORD: " << flatbed.matched() << ' ';
        break;
      case FLOAT:
        cout << "FLOAT: " << flatbed.matched() << ' ';
        break;
      case STRING:
        cout << "STRING: " << flatbed.matched() << ' ';
        break;
      case OP:
        cout << "OPERATOR: " << flatbed.matched() << ' ';
        break;
      default:
        cout << "CHAR: " << flatbed.matched() << ' ';
        break;
    }
  }
}
