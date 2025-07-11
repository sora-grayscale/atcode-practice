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
#include <utility>

int main() {
  int a, b, c;

  std::cin >> a >> b >> c;

  if (a * b == c) {
    std::cout << "Yes" << std::endl;
    return (0);
  }
  if (a * c == b) {
    std::cout << "Yes" << std::endl;
    return (0);
  }
  if (b * c == a) {
    std::cout << "Yes" << std::endl;
    return (0);
  }
  std::cout << "No" << std::endl;
  return (0);
}
