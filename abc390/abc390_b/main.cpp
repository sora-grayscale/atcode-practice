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
  float n, first, second, r;

  std::cin >> n >> first >> second;

  r = second / first;

  for (int i = 2; i < n; i++) {
    float tmp;
    std::cin >> tmp;
    if (pow(r, i) * first != tmp) {
      std::cout << "No" << std::endl;
      return (0);
    }
    second = tmp;
  }
  std::cout << "Yes" << std::endl;
  return (0);
}
