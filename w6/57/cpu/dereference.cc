#include "cpu.ih"



 int CPU::dereference(Operand const &value)
 {
     OperandType loc_type = value.type;

     (this->* s_deref[loc_type])(value.value);
 }
