#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

typedef struct {
  double_t x;
  double_t y;
} Vector2;

Vector2 vector2(double_t x, double_t y);
Vector2 vector2_add(Vector2 a, Vector2 b);
Vector2 vector2_sub(Vector2 a, Vector2 b);
Vector2 vector2_mul(Vector2 v, double_t k);
Vector2 vector2_div(Vector2 v, double_t k);
double_t vector2_len(Vector2 v);
Vector2 vector2_norm(Vector2 v);
double_t vector2_dot(Vector2 a, Vector2 b);

#endif
