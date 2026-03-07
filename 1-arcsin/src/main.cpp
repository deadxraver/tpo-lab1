#include "arcsin.hpp"

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "Wrong number of arguements, usage: " << argv[0] << " <x> <n>\n";
    return -EINVAL;
  }
  try {
    std::cout << arcsin_power(std::stod(argv[1]), std::stoul(argv[2])) << std::endl;
  } catch (std::string s) {
    std::cerr << "Error: " << s << std::endl;
    return -1;
  }
  return 0;
}
