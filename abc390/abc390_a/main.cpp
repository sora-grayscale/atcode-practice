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
  int past = 0, max = 0, flip = 0;

  for (int i = 0; i < 5; i++) {
    int tmp;
    std::cin >> tmp;
    if (i == 0) {
      past = tmp;
      max = tmp;
    } else {
      if (past < tmp && max < tmp) {
        past = tmp;
        max = tmp;
        continue;
      } else if (flip == 0) {
        flip++;
      } else {
        std::cout << "No" << std::endl;
        return (0);
      }
    }
  }
  if (flip == 1) {
    std::cout << "Yes" << std::endl;
    return (0);
  }
  std::cout << "No" << std::endl;
  return (0);
}
