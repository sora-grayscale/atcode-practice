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
  int tako_time, A, B;

  std::cin >> tako_time >> A >> B;

  if (A > B) {
    if (tako_time < A && tako_time > B) {
      std::cout << "Yes" << std::endl;
      return (0);
    }
    std::cout << "No" << std::endl;
    return (0);
  }

  if (A < B) {
    if (A <= tako_time && tako_time <= B) {
      std::cout << "No" << std::endl;
      return (0);
    }
    std::cout << "Yes" << std::endl;
    return (0);
  }
}
