#include "cpu.ih"

 bool CPU::twoOperands(Operand &lhs, int &lhsValue, int &rhsValue)
 {
     Operand rhs;

     if (not operands(lhs, rhs))             // retrieve two operands
         return false;

     rhsValue = dereference(rhs);            // store their derefernced values
     lhsValue = dereference(lhs);

     return true;
 }
