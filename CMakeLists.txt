cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


project(learncpp.com)


option(BUILD_GMOCK "Builds the googlemock subproject" OFF)
option(INSTALL_GTEST "Enable installation of googletest. (Projects embedding googletest may want to turn this OFF.)" OFF)
option(GTEST_HAS_ABSL "Use Abseil and RE2. Requires Abseil and RE2 to be separately added to the build." OFF)
add_subdirectory(external/gtest)


if(MSVC)
  # warning level 4
  add_compile_options(/W4)
else()
  # additional warnings
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


add_subdirectory(hello_world)
add_subdirectory(print_standart)
add_subdirectory(output_numbers)
add_subdirectory(multiplyBy2)
add_subdirectory(centuryFromYear)
add_subdirectory(sumAndDiffTwoNum)
add_subdirectory(twiceAsOld)
add_subdirectory(sketch)
add_subdirectory(doubleNumber)
add_subdirectory(doubleNumberWithCheckRange)

