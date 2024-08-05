#include <cstdint>
#include <cstdlib>
#include <iostream>


// Считывание возраста с клавиатуры.
std::uint16_t getAge() {
  std::uint16_t age;
  std::cin >> age;
  return age;
}


int main() {
  std::cout << "Enter father age: ";
  const std::uint16_t fatherAge = getAge();
  std::cout << "Enter son age: ";
  const std::uint16_t sonAge = getAge();

  // Обозначим возраст через который отцу будет в два раза больше лет, чем сыну за x.
  // Когда событие случится, отцу будет fatherAge + x, а сыну sonAge + x.
  // В результате получаем уравнение fatherAge + x = 2 * (sonAge + x).
  // sonAge умножается на 2 т.к. отец будет в два раза старше сына.
  // После преобразований получаем формулу: x =  fatherAge - 2 * sonAge.
  // Т.к. событие могло происходить в прошлом, используем abs при подсчёте числа лет до или после события.
  std::cout << std::abs(fatherAge - 2 * sonAge) << '\n';

  return EXIT_SUCCESS;
}
