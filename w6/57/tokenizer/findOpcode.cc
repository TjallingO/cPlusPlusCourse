#include "tokenizer.ih"

Opcode Tokenizer::findOpcode() const    // find opcode matching d_read's
{                                       // contents
    for (size_t idx = 0; idx != s_nOpcodes; ++idx)      // inspect all opcode
    {                                                   // names.
        if (s_opcodeMap[idx].mnemonic == d_read)        // got one? return the
            return s_opcodeMap[idx].opcode;             // matching opcode
    }

    return Opcode::ERR;                                 // or an error
}
