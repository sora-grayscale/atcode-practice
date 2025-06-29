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

bool isMoveable(const std::vector<std::string> &grid, const size_t &x,
                const size_t &y) {
  // 境界チェック
  if (x < 1 || y < 1 || y > grid.at(0).size() || x > grid.size()) {
    return (false);
  }
  // 壁チェック
  if (grid.at(x - 1).at(y - 1) == '#') {
    return (false);
  }
  return (true); // return 1
}

bool isHome(const std::vector<std::string> &grid, const size_t &x,
            const size_t &y) {
  if (grid.at(x - 1).at(y - 1) == '@') {
    return (true);
  }
  return (false);
}

void setPosition(const std::vector<std::string> &grid, size_t &x, size_t &y,
                 std::set<std::pair<size_t, size_t>> &visited,
                 const char moveTo) {
  // check is moveable
  size_t willX = x, willY = y;
  if (moveTo == 'U') {
    willX--;
  } else if (moveTo == 'D') {
    willX++;
  } else if (moveTo == 'L') {
    willY--;
  } else if (moveTo == 'R') {
    willY++;
  }
  if (isMoveable(grid, willX, willY)) {
    x = willX;
    y = willY;
    if (isHome(grid, x, y)) {
      visited.insert(std::make_pair(x, y));
    }
  }
}

void executeBehavior(const std::vector<std::string> &grid, size_t &x, size_t &y,
                     std::set<std::pair<size_t, size_t>> &visited,
                     const std::string behave) {
  for (size_t i = 0; i < behave.size(); i++) {
    // set position
    setPosition(grid, x, y, visited, behave.at(i));
  }
}

void outputResults(const size_t &x, const size_t &y,
                   const std::set<std::pair<size_t, size_t>> &visited) {
  std::cout << x << " " << y << " " << visited.size() << std::endl;
}

int main() {
  // define
  size_t height, width, x, y;
  std::vector<std::string> grid;
  std::set<std::pair<size_t, size_t>> visited;
  std::string behave;

  // input
  std::cin >> height >> width >> x >> y;
  grid.resize(height);
  for (size_t i = 0; i < height; ++i) {
    std::cin >> grid[i];
  }
  std::cin >> behave;

  if (isHome(grid, x, y)) {
    visited.insert(std::make_pair(x, y));
  }
  // behave
  executeBehavior(grid, x, y, visited, behave);
  outputResults(x, y, visited);
  return (0);
}
