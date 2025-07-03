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
  int number_of_snake, will_long;
  std::vector<std::pair<int, int>> snakes;

  std::cin >> number_of_snake >> will_long;
  for (int i = 0; i < number_of_snake; i++) {
    int thickness, length;
    std::cin >> thickness >> length;
    snakes.push_back(std::make_pair(thickness, length));
  }
  for (int i = 1; i <= will_long; i++) {
    int max_weigth = 0;
    for (int j = 0; j < number_of_snake; j++) {
      int tmp_weight = snakes.at(j).first * (snakes.at(j).second + i);
      if (tmp_weight > max_weigth) {
        max_weigth = tmp_weight;
      }
    }
    std::cout << max_weigth << std::endl;
  }
  return (0);
}
