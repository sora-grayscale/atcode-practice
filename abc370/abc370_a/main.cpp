#include <iostream>
#include <set>
#include <vector>
#define fast                                                                   \
  std::ios::sync_with_stdio(0);                                                \
  std::cin.tie(0);                                                             \
  std::cout.tie(0);
#include <algorithm>
#include <cmath>
#include <iomanip>

int main() {
  int l, r;
  std::cin >> l >> r;

  if (l == r) {
    std::cout << "Invalid" << std::endl;
    return (0);
  }
  if (l == 1) {
    std::cout << "Yes" << std::endl;
    return (0);
  }
  std::cout << "No" << std::endl;
  return (0);
}
