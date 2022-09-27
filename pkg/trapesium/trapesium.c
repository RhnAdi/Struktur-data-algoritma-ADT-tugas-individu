#include <stdio.h>

// Struct Trapesium
struct Trapesium
{
  float ab, bc, cd, ad, t;
};

// Constructor Trapesium
struct Trapesium initTrapesium(float ab, float bc, float cd, float ad, float t)
{
  struct Trapesium *tr = (struct Trapesium *)malloc(sizeof(struct Trapesium));
  tr->ab = ab;
  tr->bc = bc;
  tr->cd = cd;
  tr->ad = ad;
  tr->t = t;
  return *tr;
}

// Accesor Trapesium
float getLuasTrapesium(struct Trapesium tr)
{
  return 1 / 2.0 * (tr.ab + tr.cd) * tr.t;
}
float getKelilingTrapesium(struct Trapesium tr)
{
  return tr.ab + tr.bc + tr.cd + tr.ad;
}

// Mutator Trapesium
void ubahTrapesium(struct Trapesium *tr, float ab, float bc, float cd, float ad, float t)
{
  tr->ab = ab;
  tr->bc = bc;
  tr->cd = cd;
  tr->ad = ad;
  tr->t = t;
}