#include "arcsin_test.hpp"

#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TestRunner.h>

CPPUNIT_TEST_SUITE_REGISTRATION(ArcsinTestCase);

int main(void) {
  CppUnit::TextUi::TestRunner runner;
  runner.addTest(CppUnit::TestFactoryRegistry::getRegistry().makeTest());
  return runner.run() ? 0 : 1;
}
