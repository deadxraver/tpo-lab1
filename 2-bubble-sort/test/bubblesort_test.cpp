#include <gtest/gtest.h>

#include "bubble_sort.hpp"

TEST(BubbleSortTest, PropertyTest) {
  std::vector<double> vec;
  bubble_sort(vec);
  EXPECT_EQ(vec.size(), 0);
  vec = {0, 0, 1, 0, -1};
  std::size_t expected_sz = vec.size();
  bubble_sort(vec);
  EXPECT_EQ(expected_sz, vec.size());
}
