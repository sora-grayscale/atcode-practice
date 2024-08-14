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
  int first, end, diff;
  std::cin >> first >> end >> diff;

  for (int i = first; i <= end; i += diff) {
    if (i == first) {
      std::cout << i;
    } else {
      std::cout << " " << i;
    }
  }
  std::cout << std::endl;
}
