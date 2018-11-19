#include "tokenizer.ih"

Tokenizer::OpcodeMap const Tokenizer::s_opcodeMap[]
{
    {
        Opcode::MOV,
        "mov"
    },
    {
        Opcode::ADD,
        "add"
    },
    {
        Opcode::SUB,
        "sub"
    },
    {
        Opcode::MUL,
        "mul"
    },
    {
        Opcode::DIV,
        "div"
    },
    {
        Opcode::NEG,
        "neg"
    },
    {
        Opcode::DSP,
        "dsp"
    },
    {
        Opcode::STOP,
        "stop"
    },
};

size_t const Tokenizer::s_nOpcodes =
                    sizeof(s_opcodeMap) / sizeof(Tokenizer::OpcodeMap);
