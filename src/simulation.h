#ifndef SIM_H
#define SIM_H

#include "vector.h"
#include "particle.h"

// Calculate the gravitational force that affects p1.
// Uses newton's universal law of gravity.
Vector2 calc_gravity(Particle2 p1, Particle2 p2);

// Calculate the acceleration that an object experiences due to a force.
// F = ma
Vector2 acceleration(Particle2 p, Vector2 f);

#endif
