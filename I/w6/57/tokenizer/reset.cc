#include "tokenizer.ih"

void Tokenizer::reset()
{
    string line;
    ++d_line;
    getline(cin, line);
}
