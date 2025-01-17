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
  char a, b, c;
  std::cin >> a >> b >> c;

  if (a != b) {
    std::cout << "A" << std::endl;
    return (0);
  }
  if (a == c) {
    std::cout << "B" << std::endl;
    return (0);
  }
  std::cout << "C" << std::endl;
  return (0);
}
