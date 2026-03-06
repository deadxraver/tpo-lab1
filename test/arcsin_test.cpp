#include "arcsin_test.hpp"

#include <cmath>
#include <iostream>

void ArcsinTestCase::overflow_test() {
  CPPUNIT_ASSERT_THROW(arcsin_power(1.1, 10), std::string);
  CPPUNIT_ASSERT_THROW(arcsin_power(0.5, 86), std::string);
  CPPUNIT_ASSERT_NO_THROW(arcsin_power(0.5, 15));
}

void ArcsinTestCase::result_test() {
  CPPUNIT_ASSERT_EQUAL(0.0, arcsin_power(0, 20));
  CPPUNIT_ASSERT_EQUAL(M_PI / 2, arcsin_power(1, 70));
}
