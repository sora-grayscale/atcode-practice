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

bool compareBySize(const std::pair<std::string, size_t> &a,
                   const std::pair<std::string, size_t> &b) {
  return a.second < b.second;
}

int main() {
  size_t n;

  std::cin >> n;
  std::vector<std::pair<std::string, size_t>> strings;
  strings.reserve(n);

  for (size_t i = 0; i < n; i++) {
    std::string tmp;
    std::cin >> tmp;
    strings.emplace_back(std::make_pair(tmp, tmp.size()));
  }

  std::stable_sort(strings.begin(), strings.end(), compareBySize);
  for (size_t i = 0; i < n; i++) {
    std::cout << strings.at(i).first;
  }
  std::cout << std::endl;
  return (0);
}
