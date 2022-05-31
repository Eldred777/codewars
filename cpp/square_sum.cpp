#include <vector>

int square_sum(const std::vector<int>& numbers) {
  int sum = 0;
  for (auto& i : numbers) {
    sum += i * i;
  }
  return sum;
}