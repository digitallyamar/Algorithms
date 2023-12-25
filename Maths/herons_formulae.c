
#include <math.h>
#include <stdio.h>

int main() {
  double s1 = 3.0, s2 = 4.0, s3 = 5.0, area, S;

  S = (s1 + s2 + s3) / 2;
  area = sqrt(S * (S - s1) * (S - s2) * (S - s3));

  printf("The Area of triangle = %.2f\n", area);
  return 0;
}