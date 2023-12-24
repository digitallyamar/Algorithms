#include <math.h>
#include <stdbool.h>

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
