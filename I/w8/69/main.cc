#include "main.ih"

int main(int argc, char **argv)
{
  Demo myDemo;
  Demo demo2 = myDemo.factory();  // Copy elision and thus no move constructor
  Demo demo3(demo2);              // Copy constructor
  demo3 = demo2;                  // Assigment operator
}
