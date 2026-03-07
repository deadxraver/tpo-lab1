#include <gtest/gtest.h>

#include "arcsin.hpp"

#include <cmath>
#include <iostream>

TEST(ArcsinTest, ValidationTest) {
  EXPECT_THROW(arcsin_power(1.1, 10), std::string);
  EXPECT_NO_THROW(arcsin_power(0.5, 15));
}

TEST(ArcsinTest, ResultTest) {
  EXPECT_NEAR(0.0, arcsin_power(0, 15), 0.01);
  EXPECT_NEAR(M_PI / 2, arcsin_power(1, 15), 0.15);
  EXPECT_NEAR(M_PI / 2, arcsin_power(1, 10000), 0.01);
}
