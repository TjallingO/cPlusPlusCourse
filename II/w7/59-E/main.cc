#include "main.ih"

void getlines(istream& input, Storage &warehouse)
{
  //cout << "1\n";
  warehouse.push(input);
  //cout << "2\n";
}

void printlines(Storage &warehouse)
{
  //cout << "3\n";
  cout << warehouse.getobject() << '\n';
  //cout << "4\n";
}

int main(int argc, char const *argv[])
{
  Storage warehouse;

  thread thr1(getlines, ref(cin), ref(warehouse));
  thread thr2(printlines, ref(warehouse));

  //cout << "a\n";
  thr1.join();
  //cout << "b\n";
  thr2.join();
  //cout << "c\n";

}
