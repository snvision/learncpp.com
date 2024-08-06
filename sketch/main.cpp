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


int main() {
  i16 number = getNumber();
  std::cout << "Double number: "
            << (number * 2) << '\n';

  return EXIT_SUCCESS;
}
