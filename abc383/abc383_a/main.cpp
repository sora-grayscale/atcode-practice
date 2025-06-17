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
  int n, water = 0, past_time = 0;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int pour_water, pour_time;
    std::cin >> pour_time >> pour_water;

    int time_passed = pour_time - past_time;

    water -= time_passed;
    if (water < 0) {
      water = 0;
    }

    water += pour_water;
    past_time = pour_time;
  }
  std::cout << water << std::endl;
  return (0);
}
