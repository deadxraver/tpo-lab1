#pragma once

#include "../src/arcsin.hpp"

#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class ArcsinTestCase : public CppUnit::TestCase {
  CPPUNIT_TEST_SUITE(ArcsinTestCase);
    CPPUNIT_TEST(overflow_test);
  CPPUNIT_TEST_SUITE_END();
protected:
  void overflow_test();
};
