#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

// -- Types --
typedef struct {
  double_t x;
  double_t y;
} Vector2;

// -- Vector result functions --
// Create new vector
Vector2 vector2(double_t x, double_t y) {
  Vector2 v = {x, y};
  return v;
}

// Add a and b
Vector2 vector2_add(Vector2 a, Vector2 b) {
  Vector2 c = {a.x + b.x, a.y + b.y};
  return c;
}

// Subtract b from a
Vector2 vector2_sub(Vector2 a, Vector2 b) {
  Vector2 c = {a.x - b.x, a.y - b.y};
  return c;
}

// Multiply v by a scalar
Vector2 vector2_mul(Vector2 v, double_t k) {
  Vector2 v2 = {v.x * k, v.y * k};
  return v2;
}

// Divide v by a scalar
Vector2 vector2_div(Vector2 v, double_t k) {
  Vector2 v2 = {v.x / k, v.y / k};
  return v2;
}

// Normalize v
Vector2 vector2_norm(Vector2 v) {
  double_t l = vector2_len(v);
  Vector2 v2 = vector2_div(v, l);
  return v2;
}

// -- Scalar result functions --
// Calculate dot product of a and b
double_t vector2_dot(Vector2 a, Vector2 b) {
  return a.x * b.x + a.y * b.y;
}

// Calculate length of v
double_t vector2_len(Vector2 v) {
  return sqrt(v.x * v.x + v.y * v.y);
}

#endif
