#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <bitset>

using namespace std;

int main()
{

  double value;

  cout << "Enter a value\n";

  cin >> value;

  cout << "the number is: " << value <<"\n";

  cout << "it is " ;

  cout << (value/2 != floor(value/2) ? "odd" : "even") << '\n';  //1

  cout << (value*0.5 != ceil(value*0.5) ? "odd" : "even") << '\n';  //2

  cout << (fmod(value,2)  > 0  ? "odd" : "even") << '\n';       //3 modulus

  ostringstream strs;
  strs << value;
  string str = strs.str();

  cout << '\n' << str.length() << '\n';
  cout << (str[str.length()-1] == 1 || 3 || 5 || 7 || 9  ? "odd" : "even") << '\n'; //4 maar met extra variable 

  cout << bitset<16>(value).to_string() << '\t' << bitset<16>(value).to_string()[15] << '\t';
  cout << (bitset<16>(value).to_string()[15] == '1' ? "odd" : "even") << '\n';  //5 binary
  cout << (bitset<16>(value).to_string()[15] != '0' ? "odd" : "even") << '\n';  //6 binary
}
