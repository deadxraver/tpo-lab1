#include <gtest/gtest.h>

#include "bubble_sort.hpp"

TEST(BubbleSortTest, PropertyTest) {
  std::vector<double> vec;
  bubble_sort(vec);
  EXPECT_EQ(vec.size(), 0);
}
