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

  std::cout << "L";
  for (int i = 0; i < n; i++) {
    std::cout << "o";
  }
  std::cout << "ng" << std::endl;
  return 0;
}
