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
  for (int i = 0; str[i]; i++) {
    if (i != 0) {
      std::cout << " ";
    }
    std::cout << str[i];
  }
  std::cout << std::endl;
}
