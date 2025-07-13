#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int n;
  std::vector<std::string> s;

  std::cin >> n;
  s.reserve(n);

  for (int i = 0; i < n; i++) {
    std::string tmp;
    std::cin >> tmp;
    s.emplace_back(tmp);
  }

  std::stable_sort(s.begin(), s.end(),
                   [](const std::string &x, const std::string &y) {
                     return x.size() < y.size();
                   });

  std::string ans;
  for (const auto &str : s) {
    ans += str;
  }

  std::cout << ans << '\n';
  return 0;
}
