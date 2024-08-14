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
  int n, a, b;
  std::cin >> n;
  std::cin >> a;
  for (int i = 1; i < n; i++) {
    std::cin >> b;
    if (a != b) {
      std::cout << "No" << std::endl;
      return 0;
    }
  }
  std::cout << "Yes" << std::endl;
}
