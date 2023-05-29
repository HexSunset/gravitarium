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

Vector2 vector2_mul(Vector2 v, double k) {
  Vector2 v2 = {v.x * k, v.y * k};
  return v2;
}

Vector2 vector2_div(Vector2 v, double k) {
  Vector2 v2 = {v.x / k, v.y / k};
  return v2;
}

double vector2_len(Vector2 v) {
  return sqrt(v.x * v.x + v.y * v.y);
}

Vector2 vector2_norm(Vector2 v) {
  double l = vector2_len(v);
  Vector2 v2 = vector2_div(v, l);
  return v2;
}

double vector2_dot(Vector2 a, Vector2 b) {
  return a.x * b.x + a.y * b.y;
}
