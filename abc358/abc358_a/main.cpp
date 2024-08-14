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
  std::string str_a, str_b;

  std::cin >> str_a >> str_b;
  if (str_a == "AtCoder" && str_b == "Land") {
    std::cout << "Yes" << std::endl;
    return 0;
  }
  std::cout << "No" << std::endl;
  return 0;
}
