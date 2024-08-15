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
  if (n % 4 != 0) {
    std::cout << "365" << std::endl;
    return 0;
  }
  if (n % 4 == 0 && n % 100 != 0) {
    std::cout << "366" << std::endl;
    return 0;
  }
  if (n % 400 != 0 && n % 100 == 0) {
    std::cout << "365" << std::endl;
    return 0;
  }
  if (n % 400 == 0) {
    std::cout << "366" << std::endl;
    return 0;
  }
}
