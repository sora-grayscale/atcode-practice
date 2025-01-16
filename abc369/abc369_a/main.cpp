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
  int a, b;
  std::cin >> a >> b;

  if (a == b) {
    std::cout << "1" << std::endl;
    return (0);
  }
  if ((a + b) % 2 == 0) {
    std::cout << "3" << std::endl;
    return (0);
  }
  std::cout << "2" << std::endl;
  return (0);
}
