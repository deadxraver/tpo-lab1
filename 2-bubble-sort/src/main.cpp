#include "bubble_sort.hpp"

#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<double> input;
  for (std::size_t i = 1; i < argc; ++i) {
    input.push_back(std::stod(argv[i]));
  }
  bubble_sort(input);
  for(size_t i = 0; i < input.size(); ++i) {
    std::cout << input[i] << ' ';
  }
  std::cout << std::endl;
  return 0;
}
