#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARR (10)
#define TRUE (1)
#define FALSE (0)

int linear_search(int[], int, int);

int main(int argc, char *argv[]) {
  int arr[SIZE_OF_ARR] = {20, 1, 4, 78, 201, 23, 8, 10, 23, 54};
  int num = 70;
  printf("%d %s\n", num,
         linear_search(arr, SIZE_OF_ARR, num) ? "found" : "not found");
  return EXIT_SUCCESS;
}

int linear_search(int *haystack, int size_of_arr, int needle) {
  int i;
  for (i = 0; i < size_of_arr; i++) {
    if (haystack[i] == needle)
      return TRUE;
  }
  return FALSE;
}
