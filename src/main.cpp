#include "main.hpp"

#include "arcsin.hpp"

#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "Wrong number of arguements, usage: " << argv[0] << " <x> <n>\n";
    return -EINVAL;
  }
  std::cout << arcsin_power(std::stoi(argv[1]), std::stoi(argv[2])) << std::endl;
  return 0;
}
