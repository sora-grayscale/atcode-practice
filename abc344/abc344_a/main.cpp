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
  int pipe = 0;

  std::cin >> str;
  for (size_t i = 0; i < str.size(); i++) {
    if (str[i] == '|') {
      pipe++;
    } else if (pipe != 1) {
      std::cout << str[i];
    }
  }
  std::cout << std::endl;
}
