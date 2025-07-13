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
  int n, past = 0;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int now;
    std::cin >> now;
    if (now <= past) {
      std::cout << "No" << std::endl;
      return (0);
    }
    past = now;
  }
  std::cout << "Yes" << std::endl;
  return (0);
}
