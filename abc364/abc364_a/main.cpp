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
  int n;
  std::string now, next;

  std::cin >> n;
  ;
  std::cin >> now;
  for (int i = 1; i < n; i++) {
    std::cin >> next;
    if (now == "sweet" && now == next && i != n - 1) {
      std::cout << "No" << std::endl;
      return 0;
    }
    now = next;
  }
  std::cout << "Yes" << std::endl;
  return 0;
}
