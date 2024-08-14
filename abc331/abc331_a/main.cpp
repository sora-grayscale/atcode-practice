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
  int y, m, d, M, D;
  std::cin >> M >> D;
  std::cin >> y >> m >> d;

  if (D == d) {
    if (M == m) {
      std::cout << y + 1 << " " << 1 << " 1" << std::endl;
      return 0;
    }
    std::cout << y << " " << m + 1 << " 1" << std::endl;
    return 0;
  }
  std::cout << y << " " << m << " " << d + 1 << std::endl;
}
