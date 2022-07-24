#include <vector>

int grow(std::vector<int> nums)
{
  int acc = 1;
  for (auto &i : nums)
  {
    acc *= i;
  }
  return acc;
}

/* 
https://www.codewars.com/kata/reviews/5d77688314c1b90001124b5a/groups/5d77d70e76056a0001252d72

#include <vector>
#include <numeric>
#include <functional>

int grow(const std::vector<int>& nums) {
  return std::accumulate(nums.cbegin(), nums.cend(), 1, std::multiplies<int>());
}
 */