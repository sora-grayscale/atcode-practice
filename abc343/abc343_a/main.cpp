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
  int a, b, sum;
  std::cin >> a >> b;

  sum = a + b;
  if (sum + 1 <= 9) {
    std::cout << sum + 1 << std::endl;
    return 0;
  }
  std::cout << sum - 1 << std::endl;
  return 0;
}
