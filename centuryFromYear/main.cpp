#include <cstdint>
#include <cstdlib>
#include <iostream>


// Считываем год с клавиатуры.
std::int16_t getYear() {
  std::cout << "Enter year: ";
  std::int16_t year;
  std::cin >> year;
  return year;
}

// Если остоток от деления года на 100 равен нулю,
// значит номер века равен частому года от 100,
// в проивном случае к частому от 100 прибаляется 1.
std::int16_t centuryFromYear(std::int16_t year) {
  return (year % 100 == 0) ? (year / 100) : (year / 100 + 1);
}

// Печатаем номер века.
void printCentury(std::int16_t year) {
  std::cout << "Century: "
            << centuryFromYear(year) << '\n';
}

int main() {
  std::int16_t year = getYear();
  printCentury(year);

  return EXIT_SUCCESS;
}
