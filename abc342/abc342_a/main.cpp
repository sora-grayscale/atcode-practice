#include <iostream>
#include <vector>
#define fast                                                                   \
  std::ios::sync_with_stdio(0);                                                \
  std::cin.tie(0);                                                             \
  std::cout.tie(0);
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <set>

int main() {
  std::string str;
  std::cin >> str;

  for (size_t i = 0; i < str.size(); i++) {
    char first;
    if (i == 0) {
      first = str[i];
    } else {
      if (i == 1 && first != str[i]) {
        if (first == str[2]) {
          std::cout << "2" << std::endl;
          return 0;
        }
        std::cout << "1" << std::endl;
        return 0;
      }
      if (first != str[i]) {
        std::cout << i + 1 << std::endl;
        return 0;
      }
    }
  }
}
