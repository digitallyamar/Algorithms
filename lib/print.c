#include <stdio.h>

void print_int_array(int a[], int a_size)
{
    for (int i = 0; i < a_size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}