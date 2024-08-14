#include <iostream>
#include <vector>
#define fast                                                                   \
  std::ios::sync_with_stdio(0);                                                \
  std::cin.tie(0);                                                             \
  std::cout.tie(0);
#include <algorithm>
#include <cmath>
#include <iomanip>

int main() {
  int h, sum = 0;

  std::cin >> h;
  for (int i = 0; sum <= h; i++) {
    sum += std::pow(2, i);
    if (sum > h) {
      std::cout << i + 1 << std::endl;
      return 0;
    }
  }
  return 0;
}
