#include "simulation.h"

const double_t GRAV_CONSTANT = 6.67408e-11;

Vector2 calc_gravity(Particle2 p1, Particle2 p2) {
  Vector2 radius = vector2_sub(p1.position, p2.position);
  Vector2 dir = vector2_norm(radius);
  double_t dist = vector2_len(radius);

  // (G * m_1 * m_2) / dist
  double_t scalar = (GRAV_CONSTANT * p1.mass * p2.mass) / dist;
  Vector2 force = vector2_mul(dir, scalar);

  return force;
}

Vector2 acceleration(Particle2 p, Vector2 f) {
  return vector2_div(f, p.mass);
}

