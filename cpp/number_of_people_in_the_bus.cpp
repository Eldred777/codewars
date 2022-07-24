#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>> &busStops)
{
  unsigned int passengers = 0;

  for (auto &pair : busStops)
  {
    passengers += pair.first;
    passengers -= pair.second;
  }

  return passengers;
}