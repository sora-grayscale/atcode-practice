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
  int n, w_taka = 0, w_ao = 0;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int taka, ao;
    std::cin >> taka >> ao;
    w_taka += taka;
    w_ao += ao;
  }
  if (w_taka > w_ao) {
    std::cout << "Takahashi" << std::endl;
    return 0;
  }
  if (w_taka < w_ao) {
    std::cout << "Aoki" << std::endl;
    return 0;
  }
  std::cout << "Draw" << std::endl;
  return 0;
}
