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


int main() {
  const std::int16_t year = getYear();

  // К году прибавляется 99 и затем сумма делится на 100,
  // чтобы получить номер века.
  std::cout << "Century: " << ((year + 99) / 100) << '\n';

  return EXIT_SUCCESS;
}
