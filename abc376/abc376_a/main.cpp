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
  int n, c, past, result = 1;

  std::cin >> n >> c >> past;

  for (int i = 1; i < n; i++) {
    int now;
    std::cin >> now;
    if (now - past >= c) {
      past = now;
      result++;
    }
  }
  std::cout << result << std::endl;
  return (0);
}
