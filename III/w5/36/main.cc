#include "main.ih"

int main(int argc, char const **argv)
{
  Scanner flatbed("whatever", "/dev/null");
  while (true)
  {
    switch (flatbed.lex())
    {
      case 0:
        return 0;
      case INT:
        cout << "INT:      " << flatbed.matched() << '\n';
        break;
      case WORD:
        cout << "WORD:     " << flatbed.matched() << '\n';
        break;
      case FLOAT:
        cout << "FLOAT:    " << flatbed.matched() << '\n';
        break;
      case STRING:
        cout << "STRING:   " << flatbed.matched() << '\n';
        break;
      case OP:
        cout << "OPERATOR: " << flatbed.matched() << '\n';
        break;
      default:
        cout << "CHAR:     " << flatbed.matched() << '\n';
        break;
    }
  }
}
