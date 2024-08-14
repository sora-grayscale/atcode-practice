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
  int n, ship_limit, shipping_fee, results = 0;

  std::cin >> n >> ship_limit >> shipping_fee;
  for (int i = 0; i < n; i++) {
    int item_price, item_num;
    std::cin >> item_price >> item_num;
    results += item_price * item_num;
  }
  if (results < ship_limit) {
    results += shipping_fee;
  }
  std::cout << results << std::endl;
}
