#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  FILE* pFile = fopen("text.txt", "r");

  if (pFile == NULL) {
    return 1;
  }

  char line[100];

  while (fgets(line, 100, pFile)) {
    line[strcspn(line, "\n")] = 0;

    char s[] = " ";
    char* token = strtok(line, s);
    while (token != NULL) {
      printf("%s, ", token);
      token = strtok(NULL, s);
    }
  }

  return 0;
}
