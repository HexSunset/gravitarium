#include <stdio.h>

#include "vector.h"

int main() {
  Vector2 a = vector2(1, 1);
  Vector2 b = vector2(-1, 1);
  printf("a = [%f; %f] with length %f\n", a.x, a.y, vector2_len(a));
  printf("b = [%f; %f] with length %f\n", b.x, b.y, vector2_len(b));
  printf("a dot b = %f\n", vector2_dot(a, b));

  return 0;
}
