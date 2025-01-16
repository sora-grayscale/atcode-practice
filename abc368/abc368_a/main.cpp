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
  int n, k;
  std::vector<int> numbers;
  std::cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int num;
    std::cin >> num;
    numbers.push_back(num);
  }

  int dest = n - k;
  for (int i = dest; i < n; i++) {
    std::cout << numbers.at(i) << " ";
  }
  for (int i = 0; i < dest; i++) {
    if (i + 1 == dest) {
      std::cout << numbers.at(i);
    } else {
      std::cout << numbers.at(i) << " ";
    }
  }
  std::cout << std::endl;
  return (0);
}
