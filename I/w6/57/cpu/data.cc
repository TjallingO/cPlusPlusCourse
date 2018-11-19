#include "cpu.ih"

int (CPU::*CPU::s_deref[])(int input_number) =
{
  &CPU::get_register,
  &CPU::load,
  &CPU::value,
};

void (CPU::*CPU::s_lhstype[])(int lhsvalue, int value) =
{
  &CPU::regStore,
  &CPU::store,
};
//ik heb geprobeerd ze local te maken maar dat is me helaas niet gelukt.
// dus hier maar in een data file
