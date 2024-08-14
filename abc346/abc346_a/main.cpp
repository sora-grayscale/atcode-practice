#include <iostream>
#include <vector>
#define fast std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#include <iomanip>
#include <algorithm>
#include <cmath>

int main() {
  int n, now, next;

  std::cin >> n >> now;
  for (int i = 1; i < n; i++) {
    std::cin >> next;
    if (i != 1) {
      std::cout << " ";
    }
    std::cout << now * next;
    now = next;
  }
  std::cout << std::endl;
}
