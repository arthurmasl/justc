#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100

int compare(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

int main() {
  srand(time(NULL));

  int* array = (int*)malloc(ARRAY_SIZE * sizeof(int));

  for (int i = 0; i < ARRAY_SIZE; i++) {
    array[i] = rand() % 100;
  }

  clock_t start_time = clock();
  qsort(array, ARRAY_SIZE, sizeof(int), compare);
  clock_t end_time = clock();

  double cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

  // for (int i = 0; i < ARRAY_SIZE; i++) {
  //   printf("%d, ", array[i]);
  //   if (i % 20 == 0) printf("\n");
  // }

  printf("\nsize: %dkk\n", ARRAY_SIZE / 1000000);
  printf("time: %.2fms\n", cpu_time_used * 1000);

  free(array);

  return 0;
}
