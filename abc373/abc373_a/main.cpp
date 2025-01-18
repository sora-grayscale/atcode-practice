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

  int count = 0;

  for (size_t i = 0; i < 12; i++) {
    std::string tmp;
    std::cin >> tmp;
    if (tmp.size() == i + 1) {
      count++;
    }
  }
  std::cout << count << std::endl;
  return (0);
}
