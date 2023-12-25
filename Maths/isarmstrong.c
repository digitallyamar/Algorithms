#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int countDigits(int number) {
  if (number == 0) {
    return 0;
  }

  int count = 0;
  while (number != 0) {
    number /= 10;
    count++;
  }

  return count;
}

int calculateSum(int number, int numDigits) {
  int sum = 0;

  while (number != 0) {
    int digit = number % 10;
    sum += pow(digit, numDigits);
    number /= 10;
  }

  return sum;
}

bool isArmstrong(int number) {
  int numDigits = countDigits(number);
  int sum = calculateSum(number, numDigits);

  return (sum == number);
}

int main() {

  printf("%d\n", isArmstrong(153));
  return 0;
}