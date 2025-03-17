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
  int n, d, cookie = 0, empty = 0;
  std::string str;

  std::cin >> n >> d >> str;

  cookie = std::count(str.begin(), str.end(), '@');
  empty = n - cookie;
  if (n == d || cookie == d) {
    std::cout << n << std::endl;
    return (0);
  }
  std::cout << empty + d << std::endl;
  return (0);
}
