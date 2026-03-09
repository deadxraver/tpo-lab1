project(TpoLab1-text)

add_library(text_lib
  src/abstracts.cpp
  src/entity.cpp
  src/land.cpp
)

add_executable(story src/main.cpp)
target_link_libraries(story text_lib)

