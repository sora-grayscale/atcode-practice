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
  std::string str;

  std::cin >> str;

  if (str.find('A') == std::string::npos) {
    std::cout << "No" << std::endl;
    return (0);
  }
  if (str.find('B') == std::string::npos) {
    std::cout << "No" << std::endl;
    return (0);
  }
  if (str.find('C') == std::string::npos) {
    std::cout << "No" << std::endl;
    return (0);
  }
  std::cout << "Yes" << std::endl;
  return (0);
}
