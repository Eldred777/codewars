#include <vector>

int findOdd(const std::vector<int>& numbers) {
  for (auto& i : numbers) {
    int count = 0; 
    for (auto& j : numbers) {
      if (i == j) { count++; }
    }
    if (count % 2 == 1) {
      return i; 
    }
  }
  return -1; // failure  
}

// clever solution is to use bit XOR 