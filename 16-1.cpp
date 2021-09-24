#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float PI = 3.14;
float area(float radius);
float circum(float radius);
int main() {
 float radius;
 printf("Enter radius: ");
 scanf("%f", &radius);
 printf("Area : %3f\n", area(radius));
 printf("Circumference: %3f\n", circum(radius));
}

float area(float radius) {
  return PI * radius * radius;
}

float circum(float radius) {
  return 2 * PI * radius;
}
