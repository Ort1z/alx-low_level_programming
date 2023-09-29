#include "main.h"

void print_buffer(char *b, int size) {
  int i, j;

  if (size <= 0) {
    printf("\n");
    return;
  }

  for (i = 0; i < size; i += 10) {
    printf("%08x: ", i);
    for (j = i; j < i + 10 && j < size; j += 2) {
      printf("%02x ", (unsigned char) b[j] << 8 | (unsigned char) b[j + 1]);
    }
    for (; j < i + 10; j++) {
      printf("   ");
    }
    for (j = i; j < i + 10 && j < size; j++) {
      if (isprint(b[j])) {
        printf("%c", b[j]);
      } else {
        printf(".");
      }
    }
    printf("\n");
  }
}
