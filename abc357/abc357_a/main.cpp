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
  int n, m;

  std::cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int tmp;
    std::cin >> tmp;

    m -= tmp;
    if (m == 0) {
      std::cout << i + 1 << std::endl;
      return 0;
    }
    if (m < 0) {
      std::cout << i << std::endl;
      return 0;
    }
  }
  std::cout << n << std::endl;
  return 0;
}
