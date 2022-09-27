#include <stdio.h>
#include <math.h>

// Struct Segilima
struct Segilima
{
  float s;
};

// Constructor Segilima
struct Segilima initSegilima(float s)
{
  struct Segilima *sl = (struct Segilima *)malloc(sizeof(struct Segilima));
  sl->s = s;
  return *sl;
}

// Accesor Segilima
float getLuasSegilima(struct Segilima sl)
{
  return pow(sl.s, 2) / 4.0 * sqrt(25 + 10 * sqrt(5));
}
float getKelilingSegilima(struct Segilima sl)
{
  return 5 * sl.s;
}

// Mutator Segilima
float ubahSegilima(struct Segilima *sl, float s)
{
  sl->s = s;
}