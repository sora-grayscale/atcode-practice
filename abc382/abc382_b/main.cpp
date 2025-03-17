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

void print_empty(const int &n) {
  for (int i = 0; i < n; i++) {
    std::cout << ".";
  }
  std::cout << std::endl;
}

void replace_from_back(std::string &str, const int d) {
  for (int cookie = d; cookie > 0; cookie--) {
    int dest = str.find_last_of('@');
    str.at(dest) = '.';
  }
}

int main() {
  int n, d;
  std::string str;

  std::cin >> n >> d >> str;
  int cookie = std::count(str.begin(), str.end(), '@');
  if (cookie == d) {
    print_empty(n);
    return (0);
  }
  replace_from_back(str, d);
  std::cout << str << std::endl;
}
