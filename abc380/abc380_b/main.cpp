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
  int first = 0;

  std::cin >> str;
  for (size_t i = 1; i < str.size(); i++) {
    int num = 0;
    while (str.at(i) == '-') {
      num++;
      i++;
    }
    if (first) {
      std::cout << " ";
    }
    std::cout << num;
    first = 1;
  }
  std::cout << std::endl;
}
