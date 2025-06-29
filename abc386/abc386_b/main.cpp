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
  size_t results = 0, i = 0;

  std::cin >> numbers;
  while (i < numbers.size()) {
    if (numbers.at(i) == '0') {
      size_t zeroCount = 0;
      while (i < numbers.size() && numbers.at(i) == '0') {
        zeroCount++;
        i++;
      }
      results += (zeroCount + 1) / 2;
    } else {
      results++;
      i++;
    }
  }
  std::cout << results << std::endl;
  return (0);
}
