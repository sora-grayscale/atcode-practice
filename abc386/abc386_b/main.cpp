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
  std::string numbers;
  char target = '0';
  size_t count = 0;
  size_t results = 0;

  std::cin >> numbers;
  count = std::count(numbers.begin(), numbers.end(), target);
  results = numbers.size();
  if (count == 0) {
    std::cout << results << std::endl;
    return (0);
  }

  results -= count / 2;
  std::cout << results << std::endl;
  return (0);
}
