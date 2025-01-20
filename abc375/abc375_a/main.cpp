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
  int n, count = 0;
  std::string str;

  std::cin >> n >> str;
  for (int i = 0; i < n - 2; i++) {
    if (str.at(i) == '#' && str.at(i + 1) == '.' && str.at(i + 2) == '#') {
      count++;
    }
  }
  std::cout << count << std::endl;
}
