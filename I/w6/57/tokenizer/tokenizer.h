#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include <string>
#include <cstddef>
#include "../enums/enums.h"
#include <iostream>

class Tokenizer
{
    size_t d_line = 1;              // line numbers
    int d_value;                    // retrieved value
    std::string d_read;             // retrieved text

    struct OpcodeMap
    {
        Opcode opcode;
        char const *mnemonic;
    };

    static OpcodeMap const s_opcodeMap[];   // mapping opcode names to Opcode
    static size_t const s_nOpcodes;         // # opcodes

    public:
        Opcode opcode();        // return the next opcode
        OperandType token();    // next operand
        int value() const;      // value matching the token
        void reset();           // prepare for the next input
        size_t line() const;    // line number

    private:
        bool read();            // true: the next blank-delimited item on a
                                //       line was retrieved

        bool nextItem();            // true: next item is in d_read

        Opcode findOpcode() const;  // find opcode matching d_read's (or ERR)
};

inline int Tokenizer::value() const
{
    return d_value;
}

inline size_t Tokenizer::line() const
{
    return d_line;
}

#endif
/*
#include "tokenizer.h"

#include <iostream>

using namespace std;
*/
