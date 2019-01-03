#include "main.ih"

int main(int argc, char **argv)
{
  unordered_multimap<string, string> container;

  fill(container);  // These are implemented for my own benefit, did not hand
  print(container); // them in since their implementation was not required

  size_t nUniqueKeys = 0;

  for (size_t idx = 0; idx != container.bucket_count(); ++idx)
    if ( container.bucket_size(idx) != 0 )
      ++nUniqueKeys;
  // Vector creates buckets to store pairs with unique and equal (hashed)
  // keys together, but some are empty, so this 'filters' those out
  
  cout << "There are " << nUniqueKeys << " unique keys in the container\n";
}
