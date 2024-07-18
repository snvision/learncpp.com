#include <cstdint>
#include <cstdlib>
#include <iostream>


int main() {
  std::cout << "Enter first num: ";
  std::int16_t firstNum;
  std::cin >> firstNum;

  std::cout << "Enter second num: ";
  std::int16_t secondNum;
  std::cin >> secondNum;

  std::cout << "Enter second num: ";
  std::int16_t thirdNum;
  std::cin >> thirdNum;

  std::cout << "Enter second num: ";
  std::int16_t fourthNum;
  std::cin >> fourthNum;


  std::cout << "You entered " << firstNum
            << " and " << secondNum
            << " and " << thirdNum
            << " and " << fourthNum
            << '\n';

  return EXIT_SUCCESS;
}
