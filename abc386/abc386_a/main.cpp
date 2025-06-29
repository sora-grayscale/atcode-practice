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
  int a, b = -1;
  std::cin >> a;
  for (int i = 0; i < 3; i++) {
    int number;
    std::cin >> number;
    if (a != number) {
      if (b == -1) {
        b = number;
      } else if (b == number) {
        ;
      } else {
        std::cout << "No" << std::endl;
        return (0);
      }
    }
  }
  if (b == -1) {
    std::cout << "No" << std::endl;
    return (0);
  }
  std::cout << "Yes" << std::endl;
  return (0);
}
