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
  std::string string;

  std::cin >> string;
  for (size_t i = 0; i < string.size(); i++) {
    if (i != 0 && i % 2) {
      if (string[i] != '0') {
        std::cout << "No" << std::endl;
        return (0);
      }
    }
  }
  std::cout << "Yes" << std::endl;
  return (0);
}
