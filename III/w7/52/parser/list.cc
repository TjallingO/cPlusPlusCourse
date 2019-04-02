#include "parser.ih"

void Parser::list() const
{
  for (auto const &el: d_symtab)
    cout << el.first << '\t' << d_value[el.second] << '\n';
}
