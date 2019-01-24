#include "main.ih"


int main(int argc, char const **argv)
{
  if (argc != 3)                  // Conditional exit
  {
    cerr << "Invalid argument.";
    return 1;
  }

  string inputString = argv[2];   // Word to be shifted

  Handler wordHandler;            // Define Handler
  ofstream myfile (argv[1]);      // Open file
  thread thread1(execShift, ref(wordHandler), ref(myfile), ref(inputString));
                                  // Pass Handler to thread1, execute shift
  thread1.join();                 // Wait for thread1 to finish
  myfile.close();                 // Close the file

  myfile.open(argv[1]);           // Reopen the file
  thread thread2(defShift, ref(myfile), ref(inputString));
                                  // Pass the stream and string to thread2,
                                  // which itself creates a Handler
  thread2.join();                 // Wait for thread2 to finish
}
