#include "cpu.ih"

 bool CPU::rvalue(Operand &rhs)
 {
     auto token = d_tokenizer.token();           // get the next token

     if (token == OperandType::SYNTAX)           // done on error
         return error();

     rhs.type = token;
     rhs.value = d_tokenizer.value();            // retrieve the value

     if (                                        // register/memory indicators
         (                                       // must be within range ...
             token == OperandType::REGISTER
             &&
             static_cast<size_t>(rhs.value) > LAST_REGISTER
         )
         ||
         static_cast<size_t>(rhs.value) >= RAM::SIZE
     )
         return error();                         // ... or error

     return true;                                // rvalue retrieved
 }
