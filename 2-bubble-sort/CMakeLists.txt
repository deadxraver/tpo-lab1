project(TpoLab1-bubblesort)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.tar.gz
)

FetchContent_MakeAvailable(googletest)
add_library(bubblesort_lib src/bubble_sort.cpp)

add_executable(bubble_sort src/main.cpp)
target_link_libraries(bubble_sort bubblesort_lib)

add_executable(
  tests
  test/bubblesort_test.cpp
)
target_link_libraries(tests GTest::gtest_main bubblesort_lib)
target_include_directories(tests PRIVATE src)

enable_testing()
add_test(BUBBLESORT_TEST tests)
