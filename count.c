#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LEN 10

int* random_array_with_len(int len) {
  int* res = malloc(len * sizeof(int));
  srand(time(NULL));
  for(int i = 0; i < len; i++) {
    res[i] = rand();
  }
  return res;
}

void arr_print(int arr[], int len) {
  for(int i = 0; i < len; i++) {
    printf("%d \t", arr[i]);
  }
  printf("\n");
}

int arr_popcount(int input[], int len) {
  int res = 0;
  for(int i = 0; i < len; i++) {
    res += __builtin_popcount(input[i]);
  }
  return res;
}

int main(int argc, char** argv) {
  int len = atoi(argv[1]);

  int* arr = random_array_with_len(len);
  int count = arr_popcount(arr, len);

  printf("1 Bits: %d \n", count);
  return 0;
}
