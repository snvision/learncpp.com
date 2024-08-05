#include <cstdint>
#include <cstdlib>
#include <iostream>


int main() {
  std::cout << "Enter integer number: ";
  std::int16_t number;
  std::cin >> number;

  std::cout << "Double " << number << " = " << (number * 2) << '\n';

  return EXIT_SUCCESS;
}
