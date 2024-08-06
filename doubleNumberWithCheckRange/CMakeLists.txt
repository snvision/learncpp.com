project(doubleNumberWithCheckRange LANGUAGES CXX)
set(name ${PROJECT_NAME})

add_executable(${name}
  main.cpp
  mul.hpp
)


set(name ${PROJECT_NAME}_tests)

add_executable(${name}
  mul.hpp
  tests.cpp
)

target_link_libraries(${name} PRIVATE
  GTest::gtest_main
)
