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
  for (size_t i = 1; i < vec.size(); ++i) {
    EXPECT_TRUE(vec[i - 1] <= vec[i]);
  }
}

TEST(BubbleSortTest, SortCorrectnessTest) {
  std::vector<double> vec = {208, 0, -0.999999, 7, 1.01, -0.000001};
  std::vector<double> sorted = {-0.999999, -0.000001, 0, 1.01, 7, 208};
  bubble_sort(vec);
  EXPECT_EQ(vec, sorted);
}
