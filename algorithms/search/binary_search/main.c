#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARR (10)
#define TRUE (1)
#define FLASE (0)

int binary_search(int[], int, int);

int main(int argc, char *argv[]) {
  int arr[SIZE_OF_ARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int num = 20;
  printf("%d %s\n", num,
         binary_search(arr, SIZE_OF_ARR, num) ? "found" : "not found");
  return EXIT_SUCCESS;
}

int binary_search(int *haystack, int size_of_arr, int needle) {
  int low = 0;
  int high = size_of_arr;
  int mid = 0;
  int mid_value = 0;

  do {
    mid = (low + (high - low) / 2);
    mid_value = haystack[mid];

    if (mid_value == needle)
      return TRUE;
    else if (mid_value > needle)
      high = mid;
    else
      low = mid + 1;

  } while (low < high);

  return FLASE;
}
