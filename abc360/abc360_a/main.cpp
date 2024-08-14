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
  std::string str;

  std::cin >> str;
  if ((str[0] == 'R' && (str[1] == 'M' || str[2] == 'M')) ||
      (str[1] == 'R' && str[2] == 'M')) {
    std::cout << "Yes" << std::endl;
    return 0;
  }
  std::cout << "No" << std::endl;
  return 0;
}
