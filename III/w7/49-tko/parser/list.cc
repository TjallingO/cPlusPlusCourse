#include "parser.ih"

void Parser::list() const
{
  for (auto el: d_symtab)
    cout << el.first << '\n';
}
