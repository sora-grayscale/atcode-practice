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
  int n, k, y;

  std::cin >> n >> k >> y;
  for (int i = 1; i <= n; i++) {
    int num;

    std::cin >> num;
    if (i != 1) {
      std::cout << " ";
    }
    std::cout << num;
    if (i == k) {
      std::cout << " " << y;
    }
  }
  std::cout << std::endl;
}
