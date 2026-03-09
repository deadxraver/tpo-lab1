#include "entity.hpp"

#include <gtest/gtest.h>

TEST(EntityTest, PersonTest) {
  std::string name = "abcde";
  EXPECT_THROW(Person(name, 101), std::string);
  EXPECT_THROW(Person(name, -1), std::string);
  EXPECT_NO_THROW(Person(name, 1));
  EXPECT_EQ(name, Person(name, 12).name());
  int abils = 56;
  EXPECT_EQ(abils, Person(name, abils).cleanup_abilities());
  EXPECT_FALSE(Person(name, abils).has_light());
  EXPECT_TRUE(Person(name, abils, true).has_light());
}
