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
#include <utility>

int main() {
  int n;

  std::cin >> n;
  std::vector<std::string> map(n, std::string(n, '#'));

  for (int i = 1; i < n - 1; i++) {
    int j = n - i;

    char color = '#';
    if (i % 2 == 1) {
      color = '.';
    }

    for (int r = i; r < j; r++) {
      for (int c = i; c < j; c++) {
        map.at(r).at(c) = color;
      }
    }
  }
  for (const auto &row : map) {
    std::cout << row << std::endl;
  }
  return (0);
}
