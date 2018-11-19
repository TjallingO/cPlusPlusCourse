#include "tokenizer.ih"

Opcode Tokenizer::opcode()
{
    while (not read())
    {
        if (cin.eof())
        {
            cout << "Unexpected EOF at line " << d_line << '\n';
            return Opcode::STOP;
        }
        reset();
    }

    for (size_t idx = 0; idx != s_nOpcodes; ++idx)
    {
        if (s_opcodeMap[idx].mnemonic == d_read)
            return s_opcodeMap[idx].opcode;
    }

    return Opcode::ERR;
}
