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
  int n, first;

  std::cin >> n >> first;
  for (int i = 1; i < n; i++) {
    int h;
    std::cin >> h;
    if (first < h) {
      std::cout << i + 1 << std::endl;
      return 0;
    }
  }
  std::cout << "-1" << std::endl;
  return 0;
}
