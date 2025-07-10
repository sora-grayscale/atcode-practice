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
  std::string direction, results = "";

  std::cin >> direction;
  for (size_t i = 0; i < direction.size(); i++) {
    if (direction.at(i) == 'N') {
      results += 'S';
    } else if (direction.at(i) == 'E') {
      results += 'W';
    } else if (direction.at(i) == 'W') {
      results += 'E';
    } else if (direction.at(i) == 'S') {
      results += 'N';
    }
  }
  std::cout << results << std::endl;
  return (0);
}
