//+cpu
 #ifndef INCLUDED_CPU_
 #define INCLUDED_CPU_

 #include "../tokenizer/tokenizer.h"     // the Tokenizer is a component of the
                                         // CPU.
 #include "../memory/memory.h"
// class Memory;                           // Memory only needs to be a declared
                                         // term

 class CPU
 {
     enum
     {
         NREGISTERS = 5,             // a..e at indices 0..4, respectively
         LAST_REGISTER = NREGISTERS - 1
     };

     struct Operand
     {
         OperandType type;
         int value;
     };

     Memory &d_memory;
     Tokenizer d_tokenizer;

     int d_register[NREGISTERS];

     private:
       static void (CPU::*s_lhstype[])(int lhsvalue, int value);
       //replaces the switch in store
       static int (CPU::*s_deref[])(int input_number);
       //replaces the switch in dereference

     public:
         CPU(Memory &memory);
         void run();

     private:
         bool error();           // show 'syntax error', and prepare for the
                                 // next input line

         bool execute(Opcode opcode);    // perform the action matching opcode

 //+cpu
                                 // return a value or a register's or
                                 // memory location's value
         int dereference(Operand const &value);

         bool rvalue(Operand &lhs);  // retrieve an rvalue operand
         bool lvalue(Operand &lhs);  // retrieve an lvalue operand

                                 // determine 2 operands, lhs must be an lvalue
         bool operands(Operand &lhs, Operand &rhs);

         bool twoOperands(Operand &lhs, int &lhsValue, int &rhsValue);

                                 // store a value in register or memory
         void store(Operand const &lhs, int value);
 //+cpu2
         void mov();             // assign a value
         void add();             // add values
         void sub();             // subtract values
         void mul();             // multiply values
         void div();             // divide values (remainder: last reg.)
                                 // div a b computes a /= b, last reg: %
         void neg();             // negate a value
         void dsp();             // display a value

  //added for 57

         void regStore(int lhsvalue, int value); //stores value in reg
         int value(Operand value); //returns value
         int get_register(Operand value); //register reserved returns reg value


 };

 inline void CPU::regStore(int lhsvalue, int value)
 {
   d_register[lhsvalue] = value;
 }

 inline int CPU::value(Operand value)
 {
   return value.value;
 }

 inline int CPU::get_register(Operand value)
 {
   return d_register[value.value];
 }

 #endif
 //+cpu2
