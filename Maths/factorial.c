#include <stdio.h>

long long unsigned int factorial(int n) {
  long long unsigned result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {

  long long unsigned int fac_20 = factorial(20);

  printf("%llu\n", fac_20);
  return 0;
}