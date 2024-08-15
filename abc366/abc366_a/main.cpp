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
  int n, taka, ao, diff, sum;

  std::cin >> n >> taka >> ao;
  diff = std::abs(taka - ao);
  sum = taka + ao;
  if (n - sum >= diff) {
    std::cout << "No" << std::endl;
    return 0;
  }
  std::cout << "Yes" << std::endl;
  return 0;
}
