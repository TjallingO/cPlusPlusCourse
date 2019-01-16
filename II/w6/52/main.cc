#include "main.ih"

int main(int argc, char const **argv)
{
  ifstream textFile(argv[1]); // Open file1

  vector<string> data(
                      (istream_iterator<string>(textFile)),
                      istream_iterator<string>()
                     );
  // Construct vector data using istream iterator that goes through file1

  textFile.close(); // Close file1
  textFile.clear(); // Clear flags
  textFile.open(argv[2]); // Open file2

  vector<string> data2(
                       (istream_iterator<string>(textFile)),
                       istream_iterator<string>()
                      );
  // Construct vector data using istream iterator that goes through file2

  remove_if(
            data.begin(),
            data.end(),
            [](string findMe)
            {
              return findMe == "extra";
            }
           );
  // Go through vector, remove instances of 'extra'

  data.insert( data.end(), data2.begin(), data2.end() );
  // Insert data2 at the end of data

  data.erase( unique( data.begin(), data.end() ), data.end() );
  // Erase all non unique entries in data

  vector<string>(data).swap(data);
  // Shrink to fit

  for (auto el: data)
    cout << el << '\n';
  // Print entries, line-seperated

  cout << data.size() << '\t' << data.capacity();
  // Checking space
}
