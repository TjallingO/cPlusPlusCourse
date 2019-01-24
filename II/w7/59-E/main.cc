#include "main.ih"

void getlines(istream& input, Storage &warehouse)
{

  string line;
  while(getline(input, line))
    warehouse.push(line);

}

void printlines(istream& input, Storage &warehouse)
{

  while(!warehouse.empty())
  {
    cout << warehouse.getline() << '\n';
  }

}

int main(int argc, char const *argv[])
{
  Storage warehouse;

  thread thr1(getlines, ref(cin), ref(warehouse));
  thread thr2(printlines, ref(warehouse));

  thr1.join();
  thr2.join();

}
