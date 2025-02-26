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

int main() {
  int one, two, three, four;
  std::cin >> one >> two >> three >> four;

  if (one == two && three == four) {
    std::cout << 2 << std::endl;
    return 0;
  }
  if (one == three && two == four) {
    std::cout << 2 << std::endl;
    return 0;
  }
  if (one == four && two == three) {
    std::cout << 2 << std::endl;
    return 0;
  }
  if (one != two && one != three && two != three && one != four &&
      two != four && three != four) {
    std::cout << 0 << std::endl;
    return 0;
  }
  std::cout << 1 << std::endl;
  return 0;
}
