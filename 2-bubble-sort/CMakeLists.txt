project(TpoLab1-bubblesort)

add_library(bubblesort_lib src/bubble_sort.cpp)

add_executable(bubble_sort src/main.cpp)
target_link_libraries(bubble_sort bubblesort_lib)
