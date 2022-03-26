#include <stdio.h>
#include <string.h>
void sjxpd(float a, float b, float c,char t[3]) {
  if (a + b > c && a + c > b && b + c > a)
    strcpy(t,"yes");
  else
    strcpy(t,"no ");
}
int main() {
  char back[3];
  sjxpd(3,4,5,back[3]);
  printf("%s",back );
}
