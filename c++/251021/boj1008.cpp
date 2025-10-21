// BOJ1008 : A/B (B5)

#include <iostream>

int main() {
  double a, b;
  std::cin >> a >> b;
  std::cout.setf(std::ios::fixed);
  std::cout.precision(9);
  std::cout << a / b << '\n';
  return 0;
}