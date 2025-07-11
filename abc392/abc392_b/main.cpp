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
#include <utility>

int main() {
  int n, m;
  int output_num = 0;

  std::cin >> n >> m;

  int results = n - m;
  std::cout << results << std::endl;
  if (results == 0) {
    std::cout << std::endl;
    return (0);
  }

  std::set<int> dont_output_num;
  for (int i = 0; i < m; i++) {
    int tmp;
    std::cin >> tmp;
    dont_output_num.insert(tmp);
  }
  for (int i = 1; i <= n; i++) {
    std::set<int>::iterator it = dont_output_num.find(i);
    if (it == dont_output_num.end()) {
      output_num++;
      if (output_num == results) {
        std::cout << i << std::endl;
        return (0);
      } else {
        std::cout << i << " ";
      }
    }
  }
  return (0);
}
