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
  std::string name;
  size_t size;

  std::cin >> name;
  size = name.size();

  if (name.at(size - 1) != 'n') {
    std::cout << "No" << std::endl;
    return (0);
  }
  if (name.at(size - 2) != 'a') {
    std::cout << "No" << std::endl;
    return (0);
  }
  if (name.at(size - 3) != 's') {
    std::cout << "No" << std::endl;
    return (0);
  }
  std::cout << "Yes" << std::endl;
  return (0);
}
