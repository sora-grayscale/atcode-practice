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
  int n, pass_score, score, results = 0;
  std::cin >> n >> pass_score;

  for (int i = 0; i < n; i++) {
    std::cin >> score;
    if (score >= pass_score) {
      results++;
    }
  }
  std::cout << results << std::endl;
  return 0;
}
