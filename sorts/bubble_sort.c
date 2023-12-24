#include <stdio.h>

void swap(int *x, int *y) {

  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubble_sort(int *A, int len_arr) {
  for (int i = 0; i < len_arr; i++) {
    for (int j = 0; j < len_arr - 1 - i; j++) {
      if (A[j] < A[j + 1]) {
        swap(A + j, A + 1 + j);
      } else {
        continue;
      }
    }
  }
}

void print_array(int *A, int len_arr) {
  for (int i = 0; i < len_arr; i++) {
    printf("%d \n", *(A + i));
  }
}

int main(int argc, char *argv[]) {
  int test_array[] = {10, 95, 60, 3948, 8, 54, 1, 0, 5, 81};
  int len_arr = sizeof(test_array) / sizeof(test_array[0]);

  bubble_sort(test_array, len_arr);
  print_array(test_array, len_arr);
  return 0;
}
