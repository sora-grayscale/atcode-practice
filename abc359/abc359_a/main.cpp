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
  int n, results = 0;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::string str;

    std::cin >> str;
    if (str == "Takahashi") {
      results++;
    }
  }
  std::cout << results << std::endl;
}
