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
  std::vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a.at(i);
  }

  for (int i = 1; i < n - 1; i++) {
    if (a.at(i) * a.at(i) != a.at(i - 1) * a.at(i + 1)) {
      std::cout << "No" << std::endl;
      return 0;
    }
  }
  std::cout << "Yes" << std::endl;
  return 0;
}
