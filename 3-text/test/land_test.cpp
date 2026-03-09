#include "land.hpp"

#include <gtest/gtest.h>
#include <string>

TEST(LandTest, EarthTest) {
  Earth e;
  EXPECT_THROW(e.underground(), std::string);
  e.open();
  EXPECT_NO_THROW(e.underground());
  e.open();
  EXPECT_NO_THROW(e.underground());
}
