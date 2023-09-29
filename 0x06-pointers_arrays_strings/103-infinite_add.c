#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
  int i = 0;
  int j = 0;
  int k = 0;
  int carry = 0;

  while (i < strlen(n1) && j < strlen(n2)) {
    r[k] = (n1[i] - '0') + (n2[j] - '0') + carry;
    carry = r[k] / 10;
    r[k] %= 10;
    k++;
    i++;
    j++;
  }

  while (i < strlen(n1)) {
    r[k] = n1[i] - '0' + carry;
    carry = r[k] / 10;
    r[k] %= 10;
    k++;
    i++;
  }

  while (j < strlen(n2)) {
    r[k] = n2[j] - '0' + carry;
    carry = r[k] / 10;
    r[k] %= 10;
    k++;
    j++;
  }

  if (carry) {
    if (k == size_r) {
      return 0;
    }
    r[k] = carry;
    k++;
  }

  r[k] = '\0';

  return r;
}
