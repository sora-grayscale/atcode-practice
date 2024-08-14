#include <iostream>
#include <vector>
#define fast std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#include <iomanip>
#include <algorithm>
#include <cmath>

int main() {
  int bat, glove;
  std::cin >> bat >> glove;
  if (bat > glove) {
    std::cout << "Bat" << std::endl;
    return 0;
  }
  std::cout << "Glove" << std::endl;
}
