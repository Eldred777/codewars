// Closed form solution of \sum_{i=1}^n i^3 = \frac{n^2(n_1)^2}{4}
long long findSumOfCubes(long long n) {
  return (n * n * (n + 1) * (n + 1) / 4);
}

class ASum {
 public:
  static long long findNb(long long m) {
    for (long long i = 1; i < m; i++) {
      long long foo = findSumOfCubes(i);
      if (foo > m) {
        return -1;  // no solution exists, overshot target
      } else if (foo == m) {
        return i;  // solution exists
      }
    }

    return -1;  // no solution exists, exhausted all options
  };
};