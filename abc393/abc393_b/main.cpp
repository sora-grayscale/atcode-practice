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
  std::string str;
  int results = 0;

  std::cin >> str;
  for (size_t i = 1; i <= str.size(); i++) {
    for (size_t j = 0; j + (i * 2) < str.size(); j++) {
      if (str.at(j) == 'A' && str.at(j + i) == 'B' &&
          str.at(j + (i * 2)) == 'C') {
        results++;
      }
    }
  }
  std::cout << results << std::endl;
  return (0);
}
