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
  std::string number;
  int one = 0, two = 0, three = 0;

  std::cin >> number;

  for (size_t i = 0; i < number.size(); i++) {
    if (number.at(i) == '1') {
      one++;
    } else if (number.at(i) == '2') {
      two++;
    } else if (number.at(i) == '3') {
      three++;
    }
  }
  if (one != 1 || two != 2 || three != 3) {
    std::cout << "No" << std::endl;
    return (0);
  }
  std::cout << "Yes" << std::endl;
  return (0);
}
