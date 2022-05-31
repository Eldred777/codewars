#include <iostream>

bool is_square(int n) {
  for (int i = 0; i <= n; i++) {
    if (n == i * i) {
      return true;
    }
  }
  return false;
}

int main() {
  using std::cout;
  cout << is_square(-1);  // false
  cout << is_square(0);   // true
  cout << is_square(3);   // false
  cout << is_square(4);   // true
  cout << is_square(25);  // true
  cout << is_square(26);  // false
  return 0;
}
