project(TpoLab1-text)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.tar.gz
)
FetchContent_MakeAvailable(googletest)

add_library(text_lib
  src/abstracts.cpp
  src/entity.cpp
  src/land.cpp
)

add_executable(story src/main.cpp)
target_link_libraries(story text_lib)

add_executable(entity_test test/entity_test.cpp)
target_link_libraries(entity_test GTest::gtest_main text_lib)
target_include_directories(entity_test PRIVATE src)

enable_testing()
add_test(ENTITY_TEST entity_test)
