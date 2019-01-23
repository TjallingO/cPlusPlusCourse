#include <string>
#include <iostream>
#include <filesystem>
#include <vector>
#include <string>
#include <algorithm>

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

vector<string> getFiles(string const path)
{
  auto entry = fs::recursive_directory_iterator(path);
  vector<string> paths;
  for (auto el: entry)
    paths.push_back((el.path().string()));

  paths.erase(remove_if(paths.begin(), paths.end(), containsCC), paths.end());
  return paths;
}

int main()
{
  vector<string> paths = getFiles(".");
  for (auto el: paths)
    cout << el << '\n';

  cout << exec("grep");
}
