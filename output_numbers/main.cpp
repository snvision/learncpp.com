#include <cstdint>
#include <cstdlib>
#include <iostream>


// Считывание числа с клавиатуры.
std::int16_t getNumber() {
  std::int16_t number;
  std::cin >> number;
  return number;
}

// Почему не корректно работала программа?
int main() {
  std::cout << "Enter first num: ";
  const std::int16_t firstNum = getNumber();

  std::cout << "Enter second num: ";
  const std::int16_t secondNum = getNumber();

  std::cout << "Enter second num: ";
  const std::int16_t thirdNum = getNumber();

  std::cout << "Enter second num: ";
  const std::int16_t fourthNum = getNumber();

  std::cout << "You entered: "
            << firstNum << " and "
            << secondNum << " and "
            << thirdNum << " and "
            << fourthNum << '\n';

  return EXIT_SUCCESS;
}
