#include "arcsin_test.hpp"

#include <iostream>

void ArcsinTestCase::overflow_test() {
  CPPUNIT_ASSERT_THROW(arcsin_power(1.1, 10), std::string);
  CPPUNIT_ASSERT_THROW(arcsin_power(0.5, 71), std::string);
  CPPUNIT_ASSERT_NO_THROW(arcsin_power(0.5, 15));
}
