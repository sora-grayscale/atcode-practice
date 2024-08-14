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
  if (str[3] > '3') {
    std::cout << "No" << std::endl;
    return 0;
  }
  if (str[3] == '3' && str[4] > '4') {
    std::cout << "No" << std::endl;
    return 0;
  }
  if (str[3] == '3' && str[4] == '1' && str[5] == '6') {
    std::cout << "No" << std::endl;
    return 0;
  }
  if (str[3] == '0' && str[4] == '0' && str[5] == '0') {
    std::cout << "No" << std::endl;
    return 0;
  }
  std::cout << "Yes" << std::endl;
  return 0;
}
