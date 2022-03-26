#include <stdio.h>
int biger(float a, float b) {
  int t;
  if (a > b)
    t = 0;
  else
    t = 1;
  return t;
}
int main() {
  float a, b, c;
  printf("Input a,b and c: \n");
  scanf("%f %f %f", &a, &b, &c);
  printf("Input over.\n");
  int e = biger(a + b, c) + biger(a + c, b) + biger(b + c, a);
  if (e == 0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  };

  return 0;
}
