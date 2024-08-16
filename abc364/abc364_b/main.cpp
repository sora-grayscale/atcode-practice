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

size_t check_sharp(const size_t &x, const size_t &y,
                   const std::vector<std::string> &map) {

  if (x < 1 || y < 1 || y > map.at(0).size() || x > map.size()) {
    return 1;
  }
  if (map.at(x - 1).at(y - 1) == '#') {
    return 1;
  }
  return 0;
}

void map_move(size_t &pos_x, size_t &pos_y, const char &move,
              const std::vector<std::string> &map) {
  // L, R, U, D を判定する
  size_t to_x = 0, to_y = 0;
  if (move == 'L') {
    to_x = pos_x;
    to_y = pos_y - 1;
  } else if (move == 'R') {
    to_x = pos_x;
    to_y = pos_y + 1;
  } else if (move == 'U') {
    to_x = pos_x - 1;
    to_y = pos_y;
  } else if (move == 'D') {
    to_x = pos_x + 1;
    to_y = pos_y;
  }
  // その位置を見に行く
  if (check_sharp(to_x, to_y, map)) {
    return;
  }
  // #じゃなきゃposを更新 index num ではないことに注意
  pos_x = to_x;
  pos_y = to_y;
}

int main() {
  size_t m_x, m_y, pos_x, pos_y;
  std::vector<std::string> map;
  std::string move;

  std::cin >> m_x >> m_y >> pos_x >> pos_y;
  for (size_t i = 0; i < m_x; i++) {
    std::string tmp;
    std::cin >> tmp;
    map.push_back(tmp);
  }
  std::cin >> move;

  for (size_t i = 0; i < move.size(); i++) {
    map_move(pos_x, pos_y, move.at(i), map);
  }
  std::cout << pos_x << " " << pos_y << std::endl;
}
