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

TEST(LandTest, UndergroundTest) {
  Underground ug;
  EXPECT_FALSE(ug.is_open());
  EXPECT_TRUE(ug.is_dusty());
  EXPECT_TRUE(ug.is_dark());
  EXPECT_EQ(0, ug.visibility());
  EXPECT_THROW(ug.clean_up(Person("", 1)), std::string);
  EXPECT_NO_THROW(ug.clean_up(Person("", 51)));
  EXPECT_TRUE(ug.is_open());
  EXPECT_EQ(25, ug.visibility());
  EXPECT_THROW(ug.light_up(Person("", 0, false)), std::string);
  EXPECT_TRUE(ug.is_dark());
  EXPECT_NO_THROW(ug.light_up(Person("", 0, true)));
  EXPECT_FALSE(ug.is_dark());
  EXPECT_EQ(45, ug.visibility());
}
