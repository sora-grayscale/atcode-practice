#include <iostream>
#include <vector>
#define fast std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
#include <iomanip>
#include <algorithm>
#include <cmath>

int main()
{
  int n;
  std::string str;
  std::cin >> n >> str;
  for (int i = 0; i < n; i++)
  {
    if (str[i] == 'a') {
      if (str[i-1] == 'b') {
        std::cout << "Yes" << std::endl;
        return 0;
      }
    } else if (str[i] == 'b') {
      if (str[i-1] == 'a') {
        std::cout << "Yes" << std::endl;
        return 0;
      }
    }
  }
  std::cout << "No" << std::endl;
  return 0;
}
