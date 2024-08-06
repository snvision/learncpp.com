#include <cstdint>
#include <cstdlib>
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
i16 doubleNumber(i16 number) {
  return number * 2;
}


int main() {
  i16 number = getNumber();
  std::cout << "Double number: "
            << doubleNumber(number) << '\n';

  return EXIT_SUCCESS;
}
