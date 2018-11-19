#include "tokenizer.ih"

OperandType Tokenizer::token()
{
    if (not read())         // get the operand
        return OperandType::SYNTAX;

    char first = d_read.front();   // and its first character

    if (isalpha(first))             // letter: so this is a register
    {
        d_value = first - 'a';
        return OperandType::REGISTER;
    }

    if (first == '@')               // @ indicates memory address: value next
    {
        d_value = stoul(d_read.substr(1));
        return OperandType::MEMORY;
    }

    d_value = stol(d_read);
    return OperandType::VALUE;
}
