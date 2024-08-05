cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (MSVC)
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
