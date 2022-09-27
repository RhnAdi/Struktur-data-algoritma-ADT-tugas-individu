#include <stdio.h>
#include <stdlib.h>

const float PHI = 3.14;

// Struct Lingkaran
struct Lingkaran
{
  float r;
};

// Constructor Lingkaran
struct Lingkaran initLingkaran(float r)
{
  struct Lingkaran *l = (struct Lingkaran *)malloc(sizeof(struct Lingkaran));
  l->r = r;
  return *l;
}

// Accesor lingkaran
float getLuasLingkaran(struct Lingkaran l)
{
  return PHI * l.r * l.r;
}
float getKelilingLingkaran(struct Lingkaran l)
{
  return 2 * PHI * l.r;
}

// Mutator lingkaran
void ubahLingkaran(struct Lingkaran *l, float r)
{
  l->r = r;
}