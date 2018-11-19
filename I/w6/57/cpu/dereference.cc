#include "cpu.ih"



 int CPU::dereference(Operand const &value)
 {
     OperandType loc_type = value.type;

     return (this->* s_deref[static_cast<size_t>(loc_type)])(value.value);
     //using static cast to get the index from the Operandtype since its
     //an Enum Class
 }
