#include <stdio.h>
#include <stdlib.h>

struct Persegi
{
  float s;
};

// Constructor Persegi
struct Persegi initPersegi(float s)
{
  struct Persegi *p = (struct Persegi *)malloc(sizeof(struct Persegi));
  p->s = s;
  return *p;
}

// Accesor Persegi
float getLuasPersegi(struct Persegi p)
{
  return p.s * p.s;
}
float getKelilingPersegi(struct Persegi p)
{
  return 4 * p.s;
}

// Mutator Persegi
void ubahPersegi(struct Persegi *p, float s)
{
  p->s = s;
}