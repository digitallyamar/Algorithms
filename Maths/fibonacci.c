#include <math.h>

unsigned long long fibonacci(int x) {
  double goldenRatio = (1 + sqrt(5)) / 2;
  return round((pow(goldenRatio, x) - pow(1 - goldenRatio, x)) / sqrt(5));
}

#include <stdio.h>

int main() {

  unsigned long long fib = fibonacci(100);

  printf("%llu\n", fib); // 354224848179261915075 ("correct" answer)

  return 0;
}