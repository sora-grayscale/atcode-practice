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
  size_t n;
  std::vector<int> numbers, sorted;

  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    int tmp;
    std::cin >> tmp;
    numbers.push_back(tmp);
  }
  sorted = numbers;
  std::sort(sorted.rbegin(), sorted.rend());

  for (size_t i = 0; i < n; i++) {
    if (sorted.at(1) == numbers.at(i)) {
      std::cout << i + 1 << std::endl;
      return 0;
    }
  }
}
