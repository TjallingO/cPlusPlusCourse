#ifndef INCLUDED_ENUMS_
#define INCLUDED_ENUMS_

enum RAM
{
    SIZE = 20
};

    // all opcodes recognized by the CPU. They must also be known by the
    // tokenizer, which is why they are `escalated' to a separate header file.
enum class Opcode
{
    ERR,
    MOV,
    ADD,
    SUB,
    MUL,
    DIV,
    NEG,
    DSP,
    STOP,
};

    // the various operand types
enum class OperandType //altered order to correspond with arrays of pointers
{                      //to functions
    REGISTER = 0,           // register index
    MEMORY = 1,             // memory location (= index)
    VALUE = 2,              // direct value
    SYNTAX = 3,             // syntax error while specifying an operand
};


#endif
