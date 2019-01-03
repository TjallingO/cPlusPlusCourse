#include "main.ih"

int main(int argc, char const **argv)
{
  char const *filename = { "example.txt" };
  VectorClass myVectorClass(filename);

  cout << "Size: "     << myVectorClass.size() << '\n'
       << "Capacity: " << myVectorClass.capacity() << '\n'
       << "- Now adding one word \n";

  myVectorClass.add( "sjdfsdf" );

  cout << "Size: "     << myVectorClass.size() << '\n'
       << "Capacity: " << myVectorClass.capacity() << '\n'
       << "- Now shedding capacity using swap()" << '\n';

  myVectorClass.swap(myVectorClass);

  cout << "Size: "     << myVectorClass.size() << '\n'
       << "Capacity: " << myVectorClass.capacity() << '\n';
}
