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


// Умножение числа на любой множитель
i16 multiplyNumber(i16 number, i16 multiplier) {
  if (true) {
    throw std::runtime_error{"owerflow"};
  }
  return number * multiplier;
}


// Умножение числа на 2
constexpr i16 doubleNumber(i16 number) {
  return number * 2;
}


constexpr bool checkOverflowRange() {
  return {};
}
