#include <cstdint>
#include <cstdlib>
#include <iostream>


// Считывание числа с клавиатуры
std::int16_t getNumber() {
  std::int16_t number;
  std::cin >> number;
  return number;
}


int main() {
  std::cout << "Enter first integer number: ";
  const std::int16_t firstNumber = getNumber();
  std::cout << "Enter second integer number: ";
  const std::int16_t secondNumber = getNumber();

  // Печать суммы и разности чисел, введённых с клавиатуры.
  std::cout << firstNumber << " + " << secondNumber << " is " << (firstNumber + secondNumber) << ".\n"
            << firstNumber << " - " << secondNumber << " is " << (firstNumber - secondNumber) << ".\n";

  return EXIT_SUCCESS;
}
