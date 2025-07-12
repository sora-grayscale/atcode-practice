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
  std::string takahashi, aoki;

  std::cin >> takahashi >> aoki;

  if (takahashi == aoki) {
    if (takahashi == "sick") {
      std::cout << 1 << std::endl;
      return (0);
    }
    std::cout << 4 << std::endl;
    return (0);
  }
  if (takahashi == "sick") {
    std::cout << 2 << std::endl;
    return (0);
  }
  std::cout << 3 << std::endl;
  return (0);
}
