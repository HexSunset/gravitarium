#ifndef VECTOR_H
#define VECTOR_H

// -- Types --
typedef struct {
  double x;
  double y;
} Vector2;

// -- Vector result functions --
// Create new vector
Vector2 vector2(double x, double y);
// Add a and b
Vector2 vector2_add(Vector2 a, Vector2 b);
// Subtract b from a
Vector2 vector2_sub(Vector2 a, Vector2 b);
// Multiply v by a scalar
Vector2 vector2_mul(Vector2 v, double k);
// Divide v by a scalar
Vector2 vector2_div(Vector2 v, double k);

// -- Scalar result functions --
// Calculate dot product of a and b
double vector2_dot(Vector2 a, Vector2 b);
// Calculate length of v
double vector2_len(Vector2 v);

#endif
