#include <iostream>

#include "ottemplate/OTTemplate.hxx"

using namespace OT;
using namespace OTTEMPLATE;

int main()
{
  MyClass a;
  std::cout << a << std::endl;
  const double src = 0.6;
  int dst = src * 255.0;
  std::cout << std::hex << dst << std::endl;
  return 0;
}

