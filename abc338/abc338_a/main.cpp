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
  for (int i = 0; str.size() > i; i++) {
    if (i == 0) {
      if (str[i] < 'A' || str[i] > 'Z') {
        std::cout << "No" << std::endl;
        return 0;
      }
    } else if (str[i] < 'a' || str[i] > 'z') {
      std::cout << "No" << std::endl;
      return 0;
    }
  }
  std::cout << "Yes" << std::endl;
  return 0;
}
