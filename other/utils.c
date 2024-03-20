#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int id;
} Item;

Item* generateArray(int size) {
  Item* arr = (Item*)malloc(size * sizeof(Item));
  if (arr == NULL) exit(1);
  for (int i = 0; i < size; i++)
    arr[i] = (Item){i};
  return arr;
}

void counter() {
  static int count = 0;
  count++;
  printf("%d\n", count);
}

void expand(char from, char to) {
  if (from > to) return;
  for (char c = from; c <= to; c++)
    printf("%c", c);
}

void slice(char* arr, int count) {
  char str[count];

  for (int i = 0; i <= count; i++)
    str[i] = arr[i];

  printf("%s\n", str);
}

void strleng(char* s) {
  int n = 0;
  while (*s != '\0')
    (n++, s++);
  printf("%d\n", n);
}

int main() {
  int size = 10;
  Item* array = generateArray(size);

  for (int i = 0; i < size; i++)
    printf("item id: %d\n", array[i].id);

  counter();
  counter();
  counter();

  // char input[10];
  // printf("Enter a string: ");
  // fgets(input, 10, stdin);
  // printf("You entered: %s\n", input);

  // expand('a', 'z');

  char lit = 'a';
  printf("%c\n", lit);
  lit++;
  printf("%c\n", lit);

  char arr[] = "one two three";
  slice(arr, 3);
  // strleng(arr);

  return 0;
}
