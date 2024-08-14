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
  int taka = 0, ao = 0;

  for (int i = 0; i < 9; i++) {
    int num;
    std::cin >> num;
    taka += num;
  }
  for (int i = 0; i < 8; i++) {
    int num;
    std::cin >> num;
    ao += num;
  }

  std::cout << taka - ao + 1 << std::endl;
}
