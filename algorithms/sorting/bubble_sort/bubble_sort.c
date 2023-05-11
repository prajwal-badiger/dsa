#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARR (10)

void bubble_sort(int *, int);
void swap(int *, int *);

int main(int argc, char *argv[]) {
  int i;
  int arr[SIZE_OF_ARR] = {20, 1, -4, 78, 201, 23, 8, 10, 23, 54};
  for (i = 0; i < SIZE_OF_ARR; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  bubble_sort(arr, SIZE_OF_ARR);

  for (i = 0; i < SIZE_OF_ARR; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int *arr, int size_of_arr) {
  int i;
  int j;

  for (i = 0; i < size_of_arr; ++i) {
    for (j = 0; j < size_of_arr - 1 - i; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}
