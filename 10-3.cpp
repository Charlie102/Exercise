#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; i++) {
    printf("%2d * %2d = %3d \n", n, i, n * i);
  }
  return 0;
}

