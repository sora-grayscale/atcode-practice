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
  size_t n, sum = 1;

  std::cin >> n;
  for (size_t i = 1; sum < n; i++) {
    sum *= i;
    if (sum == n) {
      std::cout << i << std::endl;
      return (0);
    }
  }
  return (0);
}
