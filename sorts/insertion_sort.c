/*
 * Copyright (C) Amar 2022
 * Program: Insertion Sort
 * Author: Amar (digitallyamar@gmail.com)
 * License terms: GNU General Public License (GPL) version 2
 * 
 * Comment: Insertion sorts are like holding sorted playing cards in your hand.
 * 
 *  Pick a card(key) and look to the left. 
 *  If other cards on the left are greater than key, shift them to right. 
 *  Repeat this until you find a card that is not greater than the key.
 *  Place the key next to it and repeat this for all keys in the right.
 * 
*/

#include <stdio.h>
#include "print.h"

int* insertion_sort(int a[], int size)
{
    int key, i;

    for (int j = 1; j < size; j++) {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }

    return a;
}


int main(void)
{
    int a[] = {13, 10, 1, 5, 3, 12, 8, 17, 6, 29, 30, 2, 4, 18, 24};
    int *sorted = NULL, a_size = sizeof(a)/sizeof(int);

    sorted = insertion_sort(a, a_size);

    print_int_array(a, a_size);

    return 0;
}