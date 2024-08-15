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
  int r, g, b;
  std::string dislike;

  std::cin >> r >> g >> b >> dislike;
  if (dislike == "Red") {
    std::cout << std::min(g, b) << std::endl;
    return 0;
  }

  if (dislike == "Green") {
    std::cout << std::min(r, b) << std::endl;
    return 0;
  }

  if (dislike == "Blue") {
    std::cout << std::min(r, g) << std::endl;
    return 0;
  }
}
