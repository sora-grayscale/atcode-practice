#include <iostream>
#include <set>
#include <vector>
#define fast                                                                   \
  std::ios::sync_with_stdio(0);                                                \
  std::cin.tie(0);                                                             \
  std::cout.tie(0);
#include <algorithm>
#include <cmath>
#include <iomanip>

int main() {
  int number, results = 2025, counter = 0;

  std::cin >> number;
  if (number == 1) {
    std::cout << 2024 << std::endl;
    return (0);
  }
  if (number == 81) {
    std::cout << 1944 << std::endl;
    return (0);
  }

  for (int i = 1; i <= 9; i++) {
    if (number % i == 0) {
      int tmp = number / i;
      if (tmp >= 1 && tmp <= 9) {
        counter++;
      }
    }
  }
  std::cout << results - (number * counter) << std::endl;
  return (0);
}
