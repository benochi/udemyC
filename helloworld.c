#include <stdio.h>
int main() {
  unsigned char one; //-128 - 127 if signed 0-255 unsigned.
  one = 255;
  printf("One value is: %d", one);
  return 0;
}