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
  int src, dest, diff;
  std::cin >> src >> dest;

  diff = std::abs(src - dest);
  if (diff <= 2) {
    std::cout << "Yes" << std::endl;
    return 0;
  }

  if (diff == 3 && src > dest) {
    std::cout << "Yes" << std::endl;
    return 0;
  }

  std::cout << "No" << std::endl;
  return 0;
}
