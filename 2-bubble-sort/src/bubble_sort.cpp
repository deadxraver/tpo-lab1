#include "bubble_sort.hpp"

void bubble_sort(std::vector<double>& vec) {
  size_t sz = vec.size();
  for(size_t i = 0; i < sz; ++i) {
    for (size_t j = 0; j < sz - 1; ++j) {
      if (vec[j] > vec[j + 1]) {
        double swp = vec[j];
        vec[j] = vec[j + 1];
        vec[j + 1] = swp;
      }
    }
  }
}
