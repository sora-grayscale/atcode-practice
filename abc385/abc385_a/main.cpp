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
  int a, b, c;

  std::cin >> a >> b >> c;
  if (a == b && b == c) {
    std::cout << "Yes" << std::endl;
    return (0);
  }
  if (a + b == c || a + c == b || b + c == a) {
    std::cout << "Yes" << std::endl;
    return (0);
  }
  std::cout << "No" << std::endl;
  return (0);
}
