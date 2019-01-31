#include <string>
#include <iostream>
#include <filesystem>
#include <vector>
#include <algorithm>
#include <mutex>
#include <thread>

using namespace std;

namespace fs = std::filesystem;

string exec(const char* cmd)
{
  array<char, 128> buffer;
  string result;
  unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
  if (!pipe)
    throw std::runtime_error("popen() failed!");

  while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
    result += buffer.data();
  return result;
}

bool containsCC(string &path)
{
  if (path.find(".cc") == string::npos)
    return true;
  else
    return false;
}

void compile(string const filepath)
{
  mutex mx;
  size_t slash = filepath.rfind('/') + 1;
  size_t dot = filepath.rfind('.');
  string const filename = filepath.substr(slash, dot - slash);
  cout << "\e[1m" << filepath << "\e[0m \n";
  string const command = "g++ -fdiagnostics-color=always --std=c++17 -Wall -O2 -c -o ./tmp/o/117" + filename + string(".o ") + filepath;
  string outputString = exec(command.c_str());
  lock_guard<mutex> guard(mx);
  cout << outputString;
}

vector<string> getFiles(string const path)
{
  auto entry = fs::recursive_directory_iterator(path);
  vector<string> paths;
  for (auto el: entry)
    paths.push_back((el.path().string()));

  paths.erase(remove_if(paths.begin(), paths.end(), containsCC), paths.end());
  return paths;
}

int main(int argc, char const **argv)
{
  cout << "\e[1m-- Cleaning \e[0m \n";
  fs::remove_all("./tmp");
  fs::create_directories("./tmp/o");
  vector<string> const paths = getFiles(".");

  vector<thread> threads;

  cout << "\e[1m-- Compiling \e[0m \n";
  for (auto el: paths)
    threads.push_back(thread(compile, el));

  for (auto &el: threads)
    el.join();

  fs::create_directories("./tmp/bin");
  cout << "\e[1m-- Linking \e[0m \n";
  string commandString = "g++ -o ./tmp/bin/binary ./tmp/o/*.o ";
  cout << argv[1];
  if (argc > 1)
    for (int idx = 1; idx != argc; ++idx)
      commandString += string(argv[idx]) += ' ';

  cout << exec(commandString.c_str()) << '\n';
  fs::remove_all("./tmp/o");
}
