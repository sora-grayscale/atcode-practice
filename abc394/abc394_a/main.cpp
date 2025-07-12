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
#include <utility>

int main() {
  std::string str;

  std::cin >> str;
  for (size_t i = 0; i < str.size(); i++) {
    if (str.at(i) == '2') {
      std::cout << '2';
    }
  }
  std::cout << std::endl;
  return (0);
}
