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
  std::string s;

  std::cin >> s;
  for (size_t i = 0; i < s.size(); i++) {
    if (s.at(i) != '.') {
      std::cout << s.at(i);
    }
  }
  std::cout << std::endl;
  return (0);
}
