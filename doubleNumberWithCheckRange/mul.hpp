#pragma once

#include <cstdint>
#include <iostream>


using i16 = std::int16_t;


// Считывание числа с клавиатуры
i16 getNumber() {
  std::cout << "Enter number: ";
  i16 number;
  std::cin >> number;
  return number;
}


// Умножение числа на 2
constexpr i16 doubleNumber(i16 number) {
  return number * 2;
}