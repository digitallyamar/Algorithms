#include <stdio.h>
#include <stdlib.h>

// Function to generate Pythagorean triples up to the nth value
int **generatePythagoreanTriples(int nth) {
  // Calculate the maximum number of triplets based on nth
  int maxTriplets = nth * (nth + 1) * (2 * nth + 1) / 6;

  // Allocate memory for the array of triplets
  int **triplets = (int **)malloc(maxTriplets * sizeof(int *));
  int count = 0;

  // Generate Pythagorean triples
  for (int a = 1; a <= nth; a++) {
    for (int b = a; b <= nth; b++) {
      for (int c = b; c <= nth; c++) {
        if (a * a + b * b == c * c) {
          // Allocate memory for each triplet
          triplets[count] = (int *)malloc(3 * sizeof(int));

          // Assign values to the triplet
          triplets[count][0] = a;
          triplets[count][1] = b;
          triplets[count][2] = c;
          count++;
        }
      }
    }
  }

  return triplets;
}

int main() {
  int nth = 10;

  // Generate Pythagorean triples
  int **triplets = generatePythagoreanTriples(nth);

  // Print generated triples
  for (int i = 0; i < nth; i++) {
    printf("%d, %d, %d\n", triplets[i][0], triplets[i][1], triplets[i][2]);
  }

  // Free allocated memory
  for (int i = 0; i < nth; i++) {
    free(triplets[i]);
  }
  free(triplets);

  return 0;
}
