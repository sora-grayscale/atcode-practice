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
  std::vector<std::string> str;
  size_t n, max = 0;

  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    std::string tmp;
    std::cin >> tmp;

    if (tmp.size() > max) {
      max = tmp.size();
    }
    str.push_back(tmp);
  }

  std::vector<std::string> results(max, std::string(n, '*'));

  for (size_t i = 0; i < max; i++) {
    for (size_t j = 0; j < n; j++) {
      if (i < str[j].size()) {
        results.at(i).at(n - j - 1) = str[j].at(i);
      }
    }
  }

  for (const auto &result : results) {
    std::string temp = result;
    while (temp.back() == '*') {
      temp.pop_back();
    }
    std::cout << temp << std::endl;
  }
  return 0;
}
