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
  if (str[0] != '<' || str[str.size() - 1] != '>') {
    std::cout << "No" << std::endl;
    return 0;
  }
  for (size_t i = 1; i < str.size() - 1; i++) {
    if (str[i] != '=') {
      std::cout << "No" << std::endl;
      return 0;
    }
  }
  std::cout << "Yes" << std::endl;
}
