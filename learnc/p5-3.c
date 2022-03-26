#include <stdio.h>

int main() {
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  float d = 20 - a - b - c;
  printf("%.2f\n", d);
  return 0;
}
