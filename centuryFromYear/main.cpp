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

// К году прибавляется 99 и затем сумма делится на 100,
// чтобы получить номер века.
std::int16_t centuryFromYear(std::int16_t year) {
  return (year + 99) / 100;
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
