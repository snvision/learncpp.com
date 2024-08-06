#include <iostream>

#include "mul.hpp"


int main() {
  const i16 number = getNumber();
  std::cout << "Double number: "
            << doubleNumber(number) << '\n';

  return EXIT_SUCCESS;
}
