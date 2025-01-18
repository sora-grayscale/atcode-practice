#include <bits/stdc++.h>
int main() {
  std::string s;

  std::cin >> s;
  if (s.substr(s.size() - 3) == "san") {
    std::cout << "Yes" << std::endl;
    return (0);
  }
  std::cout << "No" << std::endl;
  return (0);
}
