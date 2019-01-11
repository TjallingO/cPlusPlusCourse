#include "main.ih"

void read(string fileName, vector<Student> &vStudents)
{
  ifstream textFile(fileName);

  while (true)
  {
    string firstName;
    string lastName;
    string sNo;
    string grade;

    getline(textFile, firstName, '\t');

    if (textFile.eof())
      break;

    getline(textFile, lastName, '\t');
    getline(textFile, sNo, '\t');
    getline(textFile, grade);

    vStudents.push_back(Student(firstName, lastName, stoi(sNo), stod(grade)));
  }
}
