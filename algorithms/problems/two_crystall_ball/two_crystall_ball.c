#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARR (10)
#define TRUE (1)
#define FALSE (-1)

int two_crystall_balls(int[], int);

int main(int argc, char *argv[]) {

  int arr[SIZE_OF_ARR] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1};
  printf("Crystall balls break at %d\n", two_crystall_balls(arr, SIZE_OF_ARR));

  return EXIT_SUCCESS;
}

int two_crystall_balls(int breaks[], int size_of_breaks) {
  int jmp_amount = floor(sqrt(size_of_breaks));

  int i = jmp_amount;
  // move jmp_amount(sqrt(n)) at time and check if the crystall ball breaks
  for (; i < size_of_breaks; i += jmp_amount) {
    if (breaks[i])
      break;
  }

  // move back jmp_amount and check one by one
  i -= jmp_amount;

  int j;

  // iterate till jmp_amount
  for (j = 0; j <= jmp_amount && i < size_of_breaks; j++, i++) {
    if (breaks[i]) {
      return i;
    }
  }

  return FALSE;
}
