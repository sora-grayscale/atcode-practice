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
  int num;
  std::string string;
  char a, b;

  std::cin >> num >> a >> b >> string;

  for (int i = 0; i < num; i++) {
    if (string.at(i) != a) {
      string.at(i) = b;
    }
  }
  std::cout << string << std::endl;
  return (0);
}
