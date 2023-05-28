#include "vector.h"
#include <math.h>

Vector2 vector2(double x, double y) {
  Vector2 v = {x, y};
  return v;
}

Vector2 vector2_add(Vector2 a, Vector2 b) {
  Vector2 c = {a.x + b.x, a.y + b.y};
  return c;
}

Vector2 vector2_sub(Vector2 a, Vector2 b) {
  Vector2 c = {a.x - b.x, a.y - b.y};
  return c;
}

double vector2_len(Vector2 v) {
  return sqrt(v.x * v.x + v.y * v.y);
}

double vector2_dot(Vector2 a, Vector2 b) {
  return a.x * b.x + a.y * b.y;
}
