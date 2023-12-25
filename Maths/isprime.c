#include <math.h>
#include <stdbool.h>
#include <stdio.h>

typedef long long unsigned int llu;

bool is_prime(llu x) {
  if (x == 1 || x % 2 == 0) {
    return false;
  }

  llu root = (llu)round(sqrt(x));

  for (llu i = 2; i < root; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  llu x = 7237828401;
  printf("%d\n", is_prime(x));
}
