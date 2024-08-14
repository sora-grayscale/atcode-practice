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
  int n, from, to, tmp;

  std::cin >> n >> from >> to;
  tmp = to;
  for (int i = 1; i <= n; i++) {
    if (i != 1) {
      std::cout << " ";
    }
    if (i == from) {
      for (; tmp >= from; tmp--, i++) {
        if (tmp != to) {
          std::cout << " ";
        }
        std::cout << tmp;
      }
      i--;
    } else {
      std::cout << i;
    }
  }
  std::cout << std::endl;
}
