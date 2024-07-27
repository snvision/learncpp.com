#include <cstdint>
#include <cstdlib>
#include <iostream>


// Считывание числа с клавиатуры
std::int16_t getNumber() {
  std::int16_t number;
  std::cin >> number;
  return number;
}

// Печать суммы и разности чисел, введённых с клавиатуры.
void printSumAndDiffNumber(std::int16_t firstNumber, std::int16_t secondNumber) {
  std::cout << firstNumber << " + " << secondNumber << " is " << firstNumber + secondNumber << '.' << '\n'
            << firstNumber << " - " << secondNumber << " is " << firstNumber - secondNumber << '.' << '\n';
}


int main() {
  std::cout << "Enter first integer number: ";
  std::int16_t firstNumber = getNumber();
  std::cout << "Enter second integer number: ";
  std::int16_t secondNumber = getNumber();

  printSumAndDiffNumber(firstNumber, secondNumber);

  return EXIT_SUCCESS;
}
