// Programming in C/C++
// Week 1: Assignment 6
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

int main()
{
  unsigned int value;

  cout << "Please type an integer." << '\n';
  cin >> value;

  // The modulo operator, using the number 2, checks whether a value is fully divisble
  // (i.e. no remainder) by 2, and if so, returns 1 as the remainder (true), else 0 (false).
  cout << (value % 2 ? "odd" : "even") << '\n';
  //

  // Bitwise AND outputs a binary number equivalent to wherever both a and b have
  // the same bits set. Hence, performing bitwise AND on a number 'a' and '1' will
  // only output one if the last binary digit of 'a' is a one, making it uneven.
  cout << (value & 1 ? "odd" : "even") << '\n';



  // Bitwise XOR outputs a binary number that represents the bits that are set in
  // only one of the two numbers. Hence, performing this operation on a number 'a'
  // and '1' will increment the number only if 'a' is even (i.e. its binary value
  // ends with a 0).
  cout << ((value ^ 1) == (value + 1) ? "even" : "odd") << '\n';

  // Bitwise OR works, in this case, much like XOR. The number is incremented only
  // if the last digit of the binary representation of 'a' is zero, otherwise it
  // will remain the same (i.e. if it ends with a one, and is thus uneven).
  cout << ((value | 1) == (value + 1) ? "even" : "odd") << '\n';

  // For integral divisions, any fractional part is discarded. Hence, any number divisible
  // by two will equal the initial value when multiplied by two again, others won´t.
  cout << ((value / 2) * 2 == value ? "even" : "odd") << '\n';

  // The right shift operator will truncate the right-most digit of a binary number.
  // Shifting this resulting number to the left and adding a zero at the end (i.e. left shift)
  // will return the original value once more only if the last digit was a zero to begin with;
  // hence, it was even.
  cout << (((value >> 1) << 1) == value ? "odd" : "even") << '\n';
}
