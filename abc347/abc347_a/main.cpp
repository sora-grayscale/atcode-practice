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
  int n, number, flag = 0;

  std::cin >> n >> number;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    if (a % number == 0) {
      if (flag == 0) {
        flag++;
      } else {
        std::cout << " ";
      }
      std::cout << a / number;
    }
  }
  std::cout << std::endl;
}
