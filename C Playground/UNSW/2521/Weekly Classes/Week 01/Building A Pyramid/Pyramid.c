#include <stdio.h>
#include <stdlib.h>

void pyramid(int n);

int main(void) {
  pyramid(5);
  return 0;
}

void pyramid(int n) {
  if (n == 0) {
    return;
  }
  pyramid(n - 1);

  for (int i = 0; i < n; i++) {
    printf("#");
  }

  printf("\n");
}