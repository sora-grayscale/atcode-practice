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
  int n, sum = 0;

  std::cin >> n;
  for (int i = 1; i < n; i++) {
    int score;
    std::cin >> score;
    sum += score;
  }
  std::cout << sum * -1 << std::endl;
}
