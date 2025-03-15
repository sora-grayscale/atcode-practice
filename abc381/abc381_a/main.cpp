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
  // size_t n, one = 0, slash = 0, two = 0, len = 0;
  size_t n, one = 0, slash = 0, len = 0;
  std::string str;

  std::cin >> n >> str;

  len = str.size();
  one = ((len + 1) / 2) - 1;
  slash = (len + 1) / 2;
  // two = ((len * len) + 1) / 2 + 1;
  // std::cout << "one: " << one << std::endl;
  // std::cout << "slash: " << slash << std::endl;
  // std::cout << "two: " << two << std::endl;

  if (len % 2 == 0) {
    std::cout << "No" << std::endl;
    return (0);
  }
  for (size_t i = 0; i < str.size(); i++) {
    if (i < one && str.at(i) != '1') {
      std::cout << "No" << std::endl;
      return (0);
    }
    if (i == slash - 1 && str.at(i) != '/') {
      std::cout << "No" << std::endl;
      return (0);
    }
    if (i >= slash && str.at(i) != '2') {
      std::cout << "No" << std::endl;
      return (0);
    }
  }
  std::cout << "Yes" << std::endl;
  return (0);
}
