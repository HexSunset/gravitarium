#ifndef PARTICLE_H
#define PARTICLE_H

#include "vector.h"
#include <math.h>

// Simple point-particle
typedef struct {
  Vector2 position;
  Vector2 velocity;
  double_t mass;
} Particle2;

// Make a new one
Particle2 particle2(Vector2 position, Vector2 velocity, double_t mass) {
  Particle2 p = {position, velocity, mass};
  return p;
}

// Magnitude of the velocity vector
double_t particle2_speed(Particle2 p) {
  return vector2_len(p.velocity);
}

#endif
