project(TpoLab1)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.tar.gz
)
FetchContent_MakeAvailable(googletest)

add_library(arcsin_lib src/arcsin.cpp)

add_executable(arcsin src/main.cpp)
target_link_libraries(arcsin arcsin_lib)

add_executable(
  tests
  test/arcsin_test.cpp
)
target_link_libraries(tests GTest::gtest_main arcsin_lib)
target_include_directories(tests PRIVATE src)
