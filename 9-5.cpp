#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
   int i, j;
   for (i = 7; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ", j);
      }
      printf("\n");
   }
   return 0;
}
