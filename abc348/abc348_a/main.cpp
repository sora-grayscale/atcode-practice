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
  int n;

  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i != 0 && i % 3 == 0) {
      std::cout << "x";
    } else {
      std::cout << "o";
    }
  }
  std::cout << std::endl;
}
