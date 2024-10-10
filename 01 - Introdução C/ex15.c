#include <stdio.h>

int main() {

  int v1, v2, v3, v4;
  v3 = 10;

  v3 = v3 * v3;
  v1 = ( v3 * v3 ) - v3;
  v4 = v3 + v3;
  v2 = v4 + v4;

  printf("\n- v1 = %i", v1);
  printf("\n- v2 = %i", v2);
  printf("\n- v3 = %i", v3);
  printf("\n- v4 = %i", v4);
  printf("\n\n");

  return 0;

  }