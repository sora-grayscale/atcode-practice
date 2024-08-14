#include <iostream>
#include <vector>
#define fast std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#include <iomanip>
#include <algorithm>
#include <cmath>

int main() {
  std::string str;
  size_t pos = 0;
  std::cin >> str;
  for (int i = str.size() - 1; i >= 0; i--) {
    if (str[i] == '.') {
      pos = i + 1;
      break;
    }
  }
  for (size_t i = pos; i < str.size(); i++) {
    std::cout << str[i];
  }
  std::cout << std::endl;
}
