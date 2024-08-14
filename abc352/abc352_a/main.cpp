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
  int n, from, to, dest;

  std::cin >> n >> from >> to >> dest;
  if (from <= dest && to >= dest) {
    std::cout << "Yes" << std::endl;
    return 0;
  }
  if (to <= dest && from >= dest) {
    std::cout << "Yes" << std::endl;
    return 0;
  }
  std::cout << "No" << std::endl;
}
