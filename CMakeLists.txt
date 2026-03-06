project(TpoLab1)

find_package(PkgConfig REQUIRED)
pkg_check_modules(CppUnit REQUIRED cppunit)

add_executable(
  arcsin
  src/main.cpp
  src/arcsin.cpp
)

add_executable(
  tests
  test/test_main.cpp
  src/arcsin.cpp
  test/arcsin_test.cpp
)

target_include_directories(tests PRIVATE ${CppUnit_INCLUDE_DIRS})
target_link_libraries(tests ${CppUnit_LIBRARIES})
