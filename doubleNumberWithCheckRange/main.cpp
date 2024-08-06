#include <iostream>

#include "mul.hpp"


using i16 = std::int16_t;


int main() {
  std::cout << "Enter number: ";
  const i16 number = getNumber();
  std::cout << "Enter multiplier: ";
  const i16 multiplier = getNumber();
  std::cout << "Double number: "
            << doubleNumber(number) << '\n'
            << "Multiply by " << multiplier << ": "
            << multiplyNumber(number, multiplier)
            << '\n';

  return EXIT_SUCCESS;
}
