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
  int src_map_size, dst_map_size;

  std::cin >> src_map_size >> dst_map_size;

  std::vector<std::string> src_map(src_map_size), dst_map(dst_map_size);
  for (int i = 0; i < src_map_size; i++) {
    std::cin >> src_map.at(i);
  }
  for (int i = 0; i < dst_map_size; i++) {
    std::cin >> dst_map.at(i);
  }

  // find
  for (int a = 1; a <= src_map_size - dst_map_size + 1; a++) {
    for (int b = 1; b <= src_map_size - dst_map_size + 1; b++) {

      bool found = true;

      // 位置(a,b)を開始点として、M×M領域をチェック
      for (int i = 0; i < dst_map_size && found; i++) {
        for (int j = 0; j < dst_map_size && found; j++) {
          if (src_map[a - 1 + i][b - 1 + j] != dst_map[i][j]) {
            found = false;
          }
        }
      }

      if (found) {
        std::cout << a << " " << b << std::endl;
        return 0;
      }
    }
  }

  return 0;
}
