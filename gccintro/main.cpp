#include <iostream>

namespace aut4
{
  void printf(char* arg)
  {
    std::cout << arg << std::endl;
  }
}

int main(int argc, char* argv[])
{

  if(argc<2)
  {
    std::cout << "usage: " << argv[0] << " arg" << std::endl;

    return -1;
  }

  std::cout << "Hello " << argv[1] << std::endl;

  aut4::printf("Hello world");

  return 0;
}
